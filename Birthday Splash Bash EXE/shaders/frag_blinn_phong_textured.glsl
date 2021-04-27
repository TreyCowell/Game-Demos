#version 420

layout(location = 0) in vec3 inPos;
layout(location = 1) in vec3 inColor;
layout(location = 2) in vec3 inNormal;
layout(location = 3) in vec2 inUV;
layout(location = 4) in vec4 inFragPosLightSpace;

struct DirectionalLight
{
	//Light direction (defaults to down, to the left, and a little forward)
	vec4 _lightDirection;

	//Generic Light controls
	vec4 _lightCol;

	//Ambience controls
	vec4 _ambientCol;
	float _ambientPow;
	
	//Power controls
	float _lightAmbientPow;
	float _lightSpecularPow;

	float _shadowBias;
};

layout (std140, binding = 0) uniform u_Lights
{
	DirectionalLight sun;
};

layout (binding = 30) uniform sampler2D s_ShadowMap;
uniform sampler2D s_Diffuse;
uniform sampler2D s_Diffuse2;
uniform sampler2D s_Specular;

uniform vec3  u_AmbientCol;
uniform float u_AmbientStrength;

uniform vec3  u_LightPos;
uniform vec3  u_LightCol;
uniform float u_AmbientLightStrength;
uniform float u_SpecularLightStrength;
uniform float u_Shininess;
// NEW in week 7, see https://learnopengl.com/Lighting/Light-casters for a good reference on how this all works, or
// https://developer.valvesoftware.com/wiki/Constant-Linear-Quadratic_Falloff
uniform float u_LightAttenuationConstant;
uniform float u_LightAttenuationLinear;
uniform float u_LightAttenuationQuadratic;

uniform float u_TextureMix;

uniform vec3  u_CamPos;

uniform int u_lightoff;
uniform int u_ambient;
uniform int u_specular;
uniform int u_ambientspecular;
uniform int u_ambientspeculartoon;
uniform int u_Textures;
uniform int u_Shadowsonoff;

out vec4 frag_color;

float ShadowCalculation(vec4 fragPosLightSpace)
{
	//Perspective division
	vec3 projectionCoordinates = fragPosLightSpace.xyz / fragPosLightSpace.w;

	//Transform into a [0,1] range
	projectionCoordinates = projectionCoordinates * 0.5 + 0.5;

	//Get the closest depth value
	float closestDepth = texture(s_ShadowMap, projectionCoordinates.xy).r;

	//Get the current depth according to our camera
	float currentDepth = projectionCoordinates.z;

	//Check whether there's a shadow
	float shadow = currentDepth - sun._shadowBias > closestDepth ? 1.0 : 0.0;

	return shadow; 
}

//Add stuff for toon shading
const int bands = 5;
const float scaling = 1.0/bands;

// https://learnopengl.com/Advanced-Lighting/Advanced-Lighting
void main() {

	if (u_Shadowsonoff == 1)
	{
		// Diffuse
	vec3 N = normalize(inNormal);
	vec3 lightDir = normalize(-sun._lightDirection.xyz);
	float dif = max(dot(N, lightDir), 0.0);
	vec3 diffuse = dif * sun._lightCol.xyz;// add diffuse intensity

	// Specular
	vec3 viewDir  = normalize(u_CamPos - inPos);
	vec3 h        = normalize(lightDir + viewDir);

	// Get the specular power from the specular map
	float texSpec = texture(s_Specular, inUV).x;
	float spec = pow(max(dot(N, h), 0.0), 4.0); // Shininess coefficient (can be a uniform)
	vec3 specular = sun._lightSpecularPow * texSpec * spec * sun._lightCol.xyz; // Can also use a specular color

	// Get the albedo from the diffuse / albedo map
	vec4 textureColor1 = texture(s_Diffuse, inUV);
	vec4 textureColor2 = texture(s_Diffuse2, inUV);
	vec4 textureColor = mix(textureColor1, textureColor2, u_TextureMix);

	float shadow = ShadowCalculation(inFragPosLightSpace);

	vec3 result = (
		(sun._ambientPow * sun._ambientCol.xyz) + // global ambient light
		(1.0 - shadow) * (diffuse + specular) // light factors from our single light
		) * inColor * textureColor.rgb; // Object color

	frag_color = vec4(result, textureColor.a);
	}

	else{

	// Lecture 5
	vec3 ambient = u_AmbientLightStrength * u_LightCol;

	// Diffuse
	vec3 N = normalize(inNormal);
	vec3 lightDir = normalize(u_LightPos - inPos);

	float dif = max(dot(N, lightDir), 0.0);
	vec3 diffuse = dif * u_LightCol;// add diffuse intensity

	diffuse = floor(diffuse * bands) * scaling;

	//Attenuation
	float dist = length(u_LightPos - inPos);
	float attenuation = 1.0f / (
		u_LightAttenuationConstant + 
		u_LightAttenuationLinear * dist +
		u_LightAttenuationQuadratic * dist * dist);

	// Specular
	vec3 viewDir  = normalize(u_CamPos - inPos);
	vec3 h        = normalize(lightDir + viewDir);

	// Get the specular power from the specular map
	float texSpec = texture(s_Specular, inUV).x;
	float spec = pow(max(dot(N, h), 0.0), u_Shininess); // Shininess coefficient (can be a uniform)
	vec3 specular = u_SpecularLightStrength * texSpec * spec * u_LightCol; // Can also use a specular color

	// Get the albedo from the diffuse / albedo map
	vec4 textureColor1 = texture(s_Diffuse, inUV);
	vec4 textureColor2 = texture(s_Diffuse2, inUV);
	vec4 textureColor = mix(textureColor1, textureColor2, u_TextureMix);

	vec3 result = (
		(u_AmbientCol * u_AmbientStrength) + // global ambient light
		(ambient + diffuse + specular) * attenuation // light factors from our single light
		) * inColor * textureColor.rgb; // Object color

	
		if(u_lightoff == 1){
			result =  inColor * textureColor.rgb;
		}
	
		if(u_ambient == 1){
			result = ((ambient) * attenuation) * inColor * textureColor.rgb;
		}
	
		if(u_specular == 1){
			result = ((specular) * attenuation) * inColor * textureColor.rgb;
		}
	
		if(u_ambientspecular == 1){
			 result = ((ambient + specular) * attenuation) * inColor * textureColor.rgb;
		}
	
		if(u_ambientspeculartoon == 1){
			 result = ((u_AmbientCol * u_AmbientStrength) + (ambient + diffuse + specular) * attenuation) * inColor * textureColor.rgb;
		}
	
	if (u_Textures == 1){
		result = ((u_AmbientCol * u_AmbientStrength) + (ambient + diffuse + specular) * attenuation) * inColor * textureColor.rgb;
	}

	if (u_Textures == 0)
	{
		result = (ambient + diffuse + specular) * inColor;
	}

	frag_color = vec4(result, textureColor.a);
	}
}