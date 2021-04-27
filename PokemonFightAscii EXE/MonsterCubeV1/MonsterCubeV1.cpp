//Planning for Retirement Studios Presents
// POKeMON Fight Ascii -- December 1st 2019

// Treyton Cowell - 100745472
// Fredric Lai - 100748388
// Anita Lim - 100754729
// Hanna Huschilt - 100751372

#include <iostream>
#include <string>
#include "Header.h"
#include <windows.h>
#include <mmsystem.h>
using namespace std;


void start() {
	int t = 90;
	Sleep(500);
	printColorYellow("				       '\\                                  \n");
	Sleep(t);
	printColorYellow("        _.----.       ____          ,'  _\\  ___    ___     ____            \n");
	Sleep(t);
	printColorYellow("    _,-'       `.    |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.     \n");
	Sleep(t);
	printColorYellow("    \\     __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |    \n");
	Sleep(t);
	printColorYellow("     \\    \\ \\   |  _   |  |/    ,','_  `.  |          | __  |    \\|  |     \n");
	Sleep(t);
	printColorYellow("      \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |      \n");
	Sleep(t);
	printColorYellow("       \\     ,-'/  / \\ \\    ,'  |  \\/ / ,`.|         /  / \\ \\  |     |      \n");
	Sleep(t);
	printColorYellow("        \\    \\ |   \\_/ |   `-.  \\    `'   /|  |    ||   \\_/  | |\\    |      \n");
	Sleep(t);
	printColorYellow("         \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |      \n");
	Sleep(t);
	printColorYellow("          \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |      \n");
	Sleep(t);
	printColorYellow("           \\_.-'       |__|    `-._ |              '-.|     '-.| |   |      \n");
	Sleep(t);
	printColorYellow("                                   `'                            '-._|      \n");
	Sleep(500);

	cout << "                     ______ _____  _____  _   _ _____     \n";
	Sleep(t);
	cout << "	             | ___ |_   _|/  __ \\| | | |_   _|    \n";
	Sleep(t);
	cout << "	             | |_    | |  | |  \\/| |_| | | |      \n";
	Sleep(t);
	cout << "	             |  _|   | |  | | __ |  _  | | |      \n";
	Sleep(t);
	cout << "	             | |    _| |_ | |_\\ \\| | | | | |      \n";
	Sleep(t);
	cout << "	             \\_|    \\___/ \\_____/\\_| |_/ \\_/      \n\n\n\n";
	Sleep(t);
	system("PAUSE");
	system("CLS");
}

char intro() {

	string name;
	cout << "Welcome to POKeMON! My name is Proffessor Pine." << endl;
	cout << "What is your name trainer? Please enter it here: ";
	cin >> name;
	cout << "\n" << "Welcome Trainer " << name << " it is a pleasure to have you at our Academy." << endl;
	cout << "I am the head of POKeMON research here at the Ontario Tech POKeMON Battle Academy." << endl;
	cout << "Here at Ontario Tech POKeMON Battle Academy, it is your goal to battle other students to reach the top." << endl;
	cout << "Please take a look at these three starter POKeMON." << endl;
	cout << "You may select one; the grass POKeMON Sticko, the fire POKeMON Toasttor, the water POKeMON Squidchu: " << endl;


	printColorGreen("\n" "                              /.\\");
	printColorGreen("\n" "                               \\\\     /.\\");
	printColorGreen("\n" "                                \\\\____//");
	printColorGreen("\n" "                                 \\__V  \\__");
	printColorGreen("\n" "                                    \\    /");
	printColorGreen("\n" "                                     \\   \\");
	printColorGreen("\n" "                                      \\/\\/");
	cout << "\n";

	printColorRed("                    -----------          \n");
	printColorRed("                   |   .   .   |          \n");
	printColorRed("                  <|   _____   |>         \n");
	printColorRed("                   |  <_|_|_>  |          \n");
	printColorRed("                    \\/-------\\/          \n");
	cout << "\n";

	printColorBlue("         /\\  /\\                 \n");
	printColorBlue("        //\\\\//\\\\              \n");
	printColorBlue("       ( .    . )                 \n");
	printColorBlue("        \\   w  /                 \n");
	printColorBlue("        /      \\                 \n");
	printColorBlue("       / /|  |\\ \\               \n");
	printColorBlue("       \\/  \\/  \\/              \n");
	cout << "\n";
	cout << endl;
	cout << "(1) for Sticko, (2) for Toasttor, (3) for Squidchu: " << endl;
	return ' ';
}

int brawls()
{
	int h = 20;
	int h1 = 20;
	int n;
	int choice;
	cin >> choice;



	switch (choice) {
	case 1:
		
		int fighting;
		stickoVsMagifishMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			do {
			stickoVsMagifishMenu();
			fightGrass();
			h = h - 3;
			cout << "Magifish used Tackle!\n";
			cout << "Sticko's health is currently at: " << h << endl;
			cout << "Magifish's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 4;
				cout << "Sticko used Scratch!" << endl;
			}
			if (n == 2)
			{
				h = h + 3;
				cout << "Sticko used Heal!" << endl;
				cout << "Sticko regained 2 health!" << endl;
			}
			if (n == 3)
			{
				h1 = h1 - 6;
				cout << "Sticko used Stickomode!";
				cout << "It's super effective!\n";
			}
			if (n == 4)
			{
				{
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				}
			}
			} while (h > 0 && h1 > 0);
			
;			break;
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls();
			break;
		}

		break;

	case 2:
		toasttorVsFlowweyMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			toasttorVsFlowweyMenu();
			fightFire();
			do {
			h = h - 3;
			cout << "Flowwey used tackle!\n";
			cout << "Toasttor's health is currently at: " << h << endl;
			cout << "Flowwey's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 4;
				cout << "Toasttor used Tackle!" << endl;
			}
			if (n == 2)
			{
				h = h + 3;
				cout << "Toasttor used Heal!" << endl;
				cout << h << endl;
				cout << "Toasttor regained 2 health!" << endl;
			}
			if (n == 3)
			{
				h1 = h1 - 6;
				cout << "Toasttor used Toast Cannon!" << endl;
				cout << "It's super effective!\n";
			}
			if (n == 4)
			{
				{
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				}
			}
			} while (h > 0 && h1 > 0);
			break;
		
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls();
			break;
		}
		break;

	case 3:
		squidchuVsTailioMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			squidchuVsTailioMenu();
			fightWater();
			do {
			h = h - 3;
			cout << "Tailio used tackle\n";
			cout << "Squidchu's health is currently at: " << h << endl;
			cout << "Tailio's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 4;
				cout << "Squidchu used Tackle!" << endl;
			}
			if (n == 2)
			{
				h = h + 3;
				cout << "Squidchu used Heal!" << endl;
				cout << "Squidchu regained 2 health!" << endl;
			}
			if (n == 3)
			{
				h1 = h1 - 6;
				cout << "Squidchu used Ink Assault! ";
				cout << "It's super effective!\n";
			}
			if (n == 4)
			{
				{
					int x;
					cout << "Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				}
			}
			} while (h > 0 && h1 > 0);

			break;
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls();
			break;
		}
	default:
		cout << "Please enter a starter based on the numbers 1-3: ";
		//brawls();
	}

	return ' ';
}

int brawls2()
{
	cout << "Congratulations on beating your first POKeMON!\n";
	cout << "You are now well on your way to becoming an Ontario Tech Battle Academy Master!\n";
	
	int h = 25;
	int h1 = 30;
	int n;
	int choice;
	//this is to try all the starters without having to re-start the game and play through 3 seperate times
	cout << "(1) for Sticko, (2) for Toasttor, (3) for Squidchu: " << endl;
	cout << "Continue by picking your starter POKeMON: ";
	cin >> choice;



	switch (choice) {
	case 1:
		int fighting;
		stickoVsFlowweyMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			do {
			stickoVsFlowweyMenu();
			fightGrass();
			h = h - 3;
			cout << "Flowwey used Tackle!\n";
			cout << "Sticko's health is currently at: " << h << endl;
			cout << "Flowwey's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 5;
				cout << "Sticko used Scratch!" << endl;
			}
			if (n == 2)
			{
				h = h + 3;
				cout << "Sticko used Heal! " << endl;
				cout << "Sticko regained 2 health!" << endl;
			}
			if (n == 3)
			{
				h1 = h1 - 5;
				cout << "Sticko used Stickomode!\n";
			}
			if (n == 4)
			{
				
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				
			}
			} while (h > 0 && h1 > 0);

			break;
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls2();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls2();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls2();
			break;
		}

		break;

	case 2:
		toasttorVsTailioMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			toasttorVsTailioMenu();
			fightFire();
			do {
			h = h - 3;
			cout << "Tailio used tackle!\n";
			cout << "Toasttor's health is currently at: " << h << endl;
			cout << "Tailio's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 5;
				cout << "Toasttor used Tackle!\n" << endl;
			}
			if (n == 2)
			{
			h = h + 3;
			cout << "Toasttor used Heal!" << endl;
			cout << h << endl;
			cout << "Toasttor regained 2 health!" << endl;
			}
			if (n == 3)
			{
			h1 = h1 - 5;
			cout << "Toasttor used Toast Cannon!" << endl;
			}
			if (n == 4)
			{
				
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}
			}
			} while (h > 0 && h1 > 0);
			break;

		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls2();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls2();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls2();
			break;
			}
			break;

	case 3:
		squidchuVsMagifishMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			squidchuVsMagifishMenu();
			fightWater();
			do {
			h = h - 3;
			cout << "Magifish used tackle\n";
			cout << "Squidchu's health is currently at: " << h << endl;
			cout << "Magifish's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 5;
				cout << "Squidchu used Tackle!" << endl;
			}
			if (n == 2)
			{
				h = h + 3;
				cout << "Squidchu used Heal!" << endl;
				cout << "Squidchu regained 2 health!" << endl;
			}
			if (n == 3)
			{
				h1 = h1 - 5;
				cout << "Squidchu used Ink Assault! ";
			}
			} while (h > 0 && h1 > 0);
			if (n == 4)
			{
				
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				
			}
			break;
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls2();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls2();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls2();
			break;
		}
	}
	return ' ';
}



int brawls3()
{
	cout << "That POKeMON was a little tougher eh?\n";
	cout << "Good luck in your final battle!\n";

	int h = 30;
	int h1 = 40;
	int n;
	int choice;
	//this is to try all the starters without having to re-start the game and play through 3 seperate times
	cout << "(1) for Sticko, (2) for Toasttor, (3) for Squidchu: " << endl;
	cout << "Continue by picking your starter POKeMON: ";
	cin >> choice;



	switch (choice) {
	case 1:
		int fighting;
		stickoVsTailioMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			do {
				stickoVsTailioMenu();
				fightGrass();
				h = h - 6;
				cout << "Tailio used Flamethrower! It's super effective!\n";
				cout << "Sticko's health is currently at: " << h << endl;
				cout << "Tailio's remaining health is: " << h1 << endl;
				cout << "Pick a number between 1-4: ";
				cin >> n;
				if (n == 1)
				{
					h1 = h1 - 6;
					cout << "Sticko used Scratch!" << endl;
				}
				if (n == 2)
				{
					h = h + 3;
					cout << "Sticko used Heal! " << endl;
					cout << "Sticko regained 2 health!" << endl;
				}
				if (n == 3)
				{
					h1 = h1 - 4;
					cout << "Sticko used Stickomode!\n";
					cout << "It's not very effective.";
				}
				if (n == 4)
				{
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				}
			} while (h > 0 && h1 > 0);

			break;
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls3();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls3();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls3();
			break;
		}

		break;

	case 2:
		toasttorVsMagifishMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			toasttorVsMagifishMenu();
			fightFire();
			do {
				h = h - 6;
				cout << "Magifish used Water Gun! It's super effective!\n";
				cout << "Toasttor's health is currently at: " << h << endl;
				cout << "Magifish's remaining health is: " << h1 << endl;
				cout << "Pick a number between 1-4: ";
				cin >> n;
				if (n == 1)
				{
					h1 = h1 - 6;
					cout << "Toasttor used Tackle!\n" << endl;
				}
				if (n == 2)
				{
					h = h + 3;
					cout << "Toasttor used Heal!" << endl;
					cout << h << endl;
				}
				if (n == 3)
				{
					h1 = h1 - 4;
					cout << "Toasttor used Toast Cannon!" << endl;
					cout << "It's not very effective.\n";
				}
				if (n == 4)
				{
					int x;
					cout << " Select Potion(1) or Super Potion(2)";
					cin >> x;
					if (x == 1)
					{
						cout << "Used the Potion!" << endl;
						h = h + 5;
					}
					if (x == 2)
					{
						cout << "Used the Super Potion1" << endl;
						h = h + 10;
					}

				}
			} while (h > 0 && h1 > 0);
			break;

		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls3();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 Pokemon that are in Pokemon Fight. Enter your starter again: ";
			brawls3();
			break;
		case 4:
			brawls3();
			cout << "You cannot run from a trainer battle.";
			break;
		}
		break;

	case 3:
		squidchuVsFlowweyMenu();
		battle();
		cin >> fighting;
		switch (fighting) {
		case 1:
			squidchuVsFlowweyMenu();
			fightWater();
			do {
			h = h - 6;
			cout << "Flowwy used Razorleaf! It's super effective!\n";
			cout << "Squidchu's health is currently at: " << h << endl;
			cout << "Flowwey's remaining health is: " << h1 << endl;
			cout << "Pick a number between 1-4: ";
			cin >> n;
			if (n == 1)
			{
				h1 = h1 - 6;
				cout << "Squidchu used Tackle!" << endl;
			}
			if (n == 2)
			{
				h = h + 3;
				cout << "Squidchu used Heal!" << endl;
				cout << "Squidchu regained 2 health!" << endl;
			}
			if (n == 3)
			{
				h1 = h1 - 4;
				cout << "Squidchu used Ink Assault! \n";
				cout << "It's not very effective.";
			}
			if (n == 4)
			{
				int x;
				cout << " Select Potion(1) or Super Potion(2)";
				cin >> x;
				if (x == 1)
				{
					cout << "Used the Potion!" << endl;
					h = h + 5;
				}
				if (x == 2)
				{
					cout << "Used the Super Potion1" << endl;
					h = h + 10;
				}

			}
			} while (h > 0 && h1 > 0);
				//if (h <= 0) {
					//endL(); possible function for if you lose
			//}

			break;
		case 2:
			bag();
			cout << "These are the items in your bag. Use them to your advantage to swing the tide in a fight. Enter your starter again :";
			brawls3();
			break;
		case 3:
			pokemon();
			cout << "These are the 6 POKeMON that are in POKeMON Fight. Enter your starter again: ";
			brawls3();
			break;
		case 4:
			cout << "You cannot run from a trainer battle.";
			brawls3();
			break;
		}
	}
	return ' ';
}

int end() {
	cout << "Congratulations on beating all three POKeMON at the Ontario Tech Battle Academy";
	return ' ';
}

/*
int endL() {
	cout << "Your POKeMON has fainted, better luck next semester!";
	return ' ';
}
*/


int main() {
	//PlaySound(TEXT("pokemonMusic.wav"), NULL, SND_LOOP | SND_ASYNC);
	start();
	intro();
	brawls();
	brawls2();
	brawls3();
	end();
}