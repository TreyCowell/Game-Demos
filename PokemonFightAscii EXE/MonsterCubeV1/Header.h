#pragma once
#include <iostream>
#include <windows.h> 
#include <stdlib.h>
#include <string>
using namespace std;

//Read current console color
bool GetColor(short& ret) {
	CONSOLE_SCREEN_BUFFER_INFO info;
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info))
		return false;
	ret = info.wAttributes;
	return true;
}

void printColorGreen(string text, int colorCode = 10) {
	short currentColor;
	GetColor(currentColor);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, colorCode);
	cout << text;
	SetConsoleTextAttribute(color, currentColor);
}

void printColorYellow(string text, int colorCode = 6) {
	short currentColor;
	GetColor(currentColor);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, colorCode);
	cout << text;
	SetConsoleTextAttribute(color, currentColor);
}

void printColorBlue(string text, int colorCode = 3) {
	short currentColor;
	GetColor(currentColor);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, colorCode);
	cout << text;
	SetConsoleTextAttribute(color, currentColor);
}

void printColorRed(string text, int colorCode = 12) {
	short currentColor;
	GetColor(currentColor);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, colorCode);
	cout << text;
	SetConsoleTextAttribute(color, currentColor);
}

void displayBoard() {
	system("Color 0c");
	system("CLS");
}

int pokemon()
{
//Grass fighter FLOWWEY

printColorGreen("\n" "       ,                    /.\\");
printColorGreen("\n" "      <@>                    \\\\     /.\\");
printColorGreen("\n" "       \\                      \\\\____//");
printColorGreen("\n" "      _/_                      \\__V  \\_");
printColorGreen("\n" "     /. .\\                        \\    /");
printColorGreen("\n" "    /  >  \\                        \\   \\");
printColorGreen("\n" "  ^/       \\^                       \\/\\/");
printColorGreen("\n" "   \\/-----\\/");
cout << "\n";
cout << "\n";


//Water fighter MAGIFISH
printColorBlue("                __/^\\__                          /\\  /\\                 \n");
printColorBlue("               /       \\                        //\\\\//\\\\              \n");
printColorBlue("            |\\/        .\\                      ( .    . )                 \n");
printColorBlue("            |     <      3                      \\   w  /                 \n");
printColorBlue("            |/\\         /                       /      \\                 \n");
printColorBlue("               \\_______/                       / /|  |\\ \\               \n");
printColorBlue("                                               \\/  \\/  \\/              \n");

cout << "\n";


//Fire Starter TOASTTOR
printColorRed("      -----------              /\\___/\\       /\\      \n");
printColorRed("     |   .   .   |            /       \\     /  \\     \n");
printColorRed("    <|   _____   |>          | .     . |___/    |       \n");
printColorRed("     |  <_|_|_>  |           |    3    |_______/        \n");
printColorRed("      \\/-------\\/             \\_______/                \n");
cout << "\n";

return 0;
}






int stickoVsFlowweyMenu()
{
	cout << "\t\t\t" << "######################################################################\n";
	printColorGreen("\t\t\t\t\t\t\t\t\t" "       ," "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "      <@>" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "       \\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "      _/_" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "     /. .\\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "    /  >  \\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "  ^/       \\^" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "   \\/-----\\/" "\n");
	printColorGreen("\t\t\t\t" "/.\\" "\n");
	printColorGreen("\t\t\t\t" " \\\\     /.\\" "\n");
	printColorGreen("\t\t\t\t" "  \\\\____//" "\n");
	printColorGreen("\t\t\t\t" "   \\__V  \\_" "\n");
	printColorGreen("\t\t\t\t" "      \\    /" "\n");
	printColorGreen("\t\t\t\t" "       \\   \\" "\n");
	printColorGreen("\t\t\t\t" "        \\/\\/" "\n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int stickoVsTailioMenu()
{
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorRed("\t\t\t\t\t\t\t\t" "   /\\___/\\       /\\      \n");
	printColorRed("\t\t\t\t\t\t\t\t" "  /       \\     /  \\     \n");
	printColorRed("\t\t\t\t\t\t\t\t" " | .     . |___/    |       \n");
	printColorRed("\t\t\t\t\t\t\t\t" " |    3    |_______/        \n");
	printColorRed("\t\t\t\t\t\t\t\t" "  \\_______/                \n");
	cout << "\n";
	printColorGreen("\t\t\t\t" "/.\\" "\n");
	printColorGreen("\t\t\t\t" " \\\\     /.\\" "\n");
	printColorGreen("\t\t\t\t" "  \\\\____//" "\n");
	printColorGreen("\t\t\t\t" "   \\__V  \\_" "\n");
	printColorGreen("\t\t\t\t" "      \\    /" "\n");
	printColorGreen("\t\t\t\t" "       \\   \\" "\n");
	printColorGreen("\t\t\t\t" "        \\/\\/" "\n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int stickoVsMagifishMenu()
{
	system("CLS");
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorBlue("\t\t\t\t\t\t\t""                __/^\\__                 \n");
	printColorBlue("\t\t\t\t\t\t\t""               /       \\                \n");
	printColorBlue("\t\t\t\t\t\t\t""            |\\/        .\\              \n");
	printColorBlue("\t\t\t\t\t\t\t""            |     <      3               \n");
	printColorBlue("\t\t\t\t\t\t\t""            |/\\         /               \n");
	printColorBlue("\t\t\t\t\t\t\t""               \\_______/                \n");
	printColorGreen("\t\t\t\t" "/.\\" "\n");
	printColorGreen("\t\t\t\t" " \\\\     /.\\" "\n");
	printColorGreen("\t\t\t\t" "  \\\\____//" "\n");
	printColorGreen("\t\t\t\t" "   \\__V  \\_" "\n");
	printColorGreen("\t\t\t\t" "      \\    /" "\n");
	printColorGreen("\t\t\t\t" "       \\   \\" "\n");
	printColorGreen("\t\t\t\t" "        \\/\\/" "\n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int toasttorVsFlowweyMenu()
{
	system("CLS");
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorGreen("\t\t\t\t\t\t\t\t\t" "       ," "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "      <@>" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "       \\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "      _/_" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "     /. .\\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "    /  >  \\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "  ^/       \\^" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "   \\/-----\\/" "\n");
	printColorRed("\t\t\t\t""      -----------          \n");
	printColorRed("\t\t\t\t""     |   .   .   |          \n");
	printColorRed("\t\t\t\t""    <|   _____   |>         \n");
	printColorRed("\t\t\t\t""     |  <_|_|_>  |          \n");
	printColorRed("\t\t\t\t""      \\/-------\\/          \n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int toasttorVsTailioMenu()
{
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorRed("\t\t\t\t\t\t\t\t" "   /\\___/\\       /\\      \n");
	printColorRed("\t\t\t\t\t\t\t\t" "  /       \\     /  \\     \n");
	printColorRed("\t\t\t\t\t\t\t\t" " | .     . |___/    |       \n");
	printColorRed("\t\t\t\t\t\t\t\t" " |    3    |_______/        \n");
	printColorRed("\t\t\t\t\t\t\t\t" "  \\_______/                \n");
	printColorRed("\t\t\t\t""      -----------          \n");
	printColorRed("\t\t\t\t""     |   .   .   |          \n");
	printColorRed("\t\t\t\t""    <|   _____   |>         \n");
	printColorRed("\t\t\t\t""     |  <_|_|_>  |          \n");
	printColorRed("\t\t\t\t""      \\/-------\\/          \n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int toasttorVsMagifishMenu()
{
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorBlue("\t\t\t\t\t\t\t""                __/^\\__                 \n");
	printColorBlue("\t\t\t\t\t\t\t""               /       \\                \n");
	printColorBlue("\t\t\t\t\t\t\t""            |\\/        .\\              \n");
	printColorBlue("\t\t\t\t\t\t\t""            |     <      3               \n");
	printColorBlue("\t\t\t\t\t\t\t""            |/\\         /               \n");
	printColorBlue("\t\t\t\t\t\t\t""               \\_______/                \n");
	printColorRed("\t\t\t\t""      -----------          \n");
	printColorRed("\t\t\t\t""     |   .   .   |          \n");
	printColorRed("\t\t\t\t""    <|   _____   |>         \n");
	printColorRed("\t\t\t\t""     |  <_|_|_>  |          \n");
	printColorRed("\t\t\t\t""      \\/-------\\/          \n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int squidchuVsFlowweyMenu()
{
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorGreen("\t\t\t\t\t\t\t\t\t" "       ," "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "      <@>" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "       \\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "      _/_" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "     /. .\\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "    /  >  \\" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "  ^/       \\^" "\n");
	printColorGreen("\t\t\t\t\t\t\t\t\t" "   \\/-----\\/" "\n");
	printColorBlue("\t\t\t\t""         /\\  /\\                 \n");
	printColorBlue("\t\t\t\t""        //\\\\//\\\\              \n");
	printColorBlue("\t\t\t\t""       ( .    . )                 \n");
	printColorBlue("\t\t\t\t""        \\   w  /                 \n");
	printColorBlue("\t\t\t\t""        /      \\                 \n");
	printColorBlue("\t\t\t\t""       / /|  |\\ \\               \n");
	printColorBlue("\t\t\t\t""       \\/  \\/  \\/              \n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int squidchuVsTailioMenu()
{
	system("CLS");
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorRed("\t\t\t\t\t\t\t\t" "   /\\___/\\       /\\      \n");
	printColorRed("\t\t\t\t\t\t\t\t" "  /       \\     /  \\     \n");
	printColorRed("\t\t\t\t\t\t\t\t" " | .     . |___/    |       \n");
	printColorRed("\t\t\t\t\t\t\t\t" " |    3    |_______/        \n");
	printColorRed("\t\t\t\t\t\t\t\t" "  \\_______/                \n");
	printColorBlue("\t\t\t\t""         /\\  /\\                 \n");
	printColorBlue("\t\t\t\t""        //\\\\//\\\\              \n");
	printColorBlue("\t\t\t\t""       ( .    . )                 \n");
	printColorBlue("\t\t\t\t""        \\   w  /                 \n");
	printColorBlue("\t\t\t\t""        /      \\                 \n");
	printColorBlue("\t\t\t\t""       / /|  |\\ \\               \n");
	printColorBlue("\t\t\t\t""       \\/  \\/  \\/              \n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}

int squidchuVsMagifishMenu()
{
	system("CLS");
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	printColorBlue("\t\t\t\t\t\t\t""                __/^\\__                 \n");
	printColorBlue("\t\t\t\t\t\t\t""               /       \\                \n");
	printColorBlue("\t\t\t\t\t\t\t""            |\\/        .\\              \n");
	printColorBlue("\t\t\t\t\t\t\t""            |     <      3               \n");
	printColorBlue("\t\t\t\t\t\t\t""            |/\\         /               \n");
	printColorBlue("\t\t\t\t\t\t\t""               \\_______/                \n");
	printColorBlue("\t\t\t\t""         /\\  /\\                 \n");
	printColorBlue("\t\t\t\t""        //\\\\//\\\\              \n");
	printColorBlue("\t\t\t\t""       ( .    . )                 \n");
	printColorBlue("\t\t\t\t""        \\   w  /                 \n");
	printColorBlue("\t\t\t\t""        /      \\                 \n");
	printColorBlue("\t\t\t\t""       / /|  |\\ \\               \n");
	printColorBlue("\t\t\t\t""       \\/  \\/  \\/              \n");
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	return 0;
}


int battle() {
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#             FIGHT(1)             #              BAG(2)             #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#            POKeMON(3)            #              RUN(4)             #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "Please Select One: ";
	return 0;
}

int fightGrass() {
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#            SCRATCH(1)            #              HEAL(2)            #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#           STICKOMODE(3)          #               BAG(4)            #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "What will Sticko do?: ";
	return 0;
}

int fightFire() {
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#            TACKLE(1)             #              HEAL(2)            #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#          TOAST CANNON(3)         #              BAG(4)             #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "What will Toasttor do?: ";
	return 0;
}

int fightWater() {
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#            TACKLE(1)             #              HEAL(2)            #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "#           INK ASSULT(3)          #               BAG(4)            #\n";
	cout << "\t\t\t" << "#                                  #                                 #\n";
	cout << "\t\t\t" << "######################################################################\n";
	//system("CLS");
	return 0;
}

void bag()
{
	int y;
	int x;
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "                                   BAG                                 \n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "#                                POTION(1)                           #\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "#                             SUPER POTION(2)                        #\n";
	cout << "\t\t\t" << "#                                                                    #\n";
	cout << "\t\t\t" << "######################################################################\n";
}
void run() {
	exit;
}

