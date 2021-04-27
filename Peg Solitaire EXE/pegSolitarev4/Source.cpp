#include <iostream> 
#include <windows.h> 
#include <stdlib.h>
#include <string>
#include "header.h"

using namespace std;

/*
This is a digital interpretation of a board game called 'Peg Solitaire'.

TAFFE Group Members

Ayi Pranayanda – 100765502 – fakhri.pranayanda@ontariotechu.net
Trey Cowell    – 100745472 – treyton.cowell@ontariotechu.net
Eliza Dennis   – 100747942 – elizagabriella.dennis@ontariotechu.net
Fred Lai       – 100748388 – frederic.lai@ontariotechu.net
Jingyao Zhang  – 100697498 – jingyao.zhang@ontariotechu.net

Revision Date: 23-Oct-2019

*/

/*
Examples of winning moves
Remove		(origin coord - destination coord), ......
  a5		a3 - a5, c3 - a3, a5 - c3, d2 - b4, c1 - c3, b4 - d2, e1 - c3, a1 - c1, a2 - a4, d1 - b1, b1 - b3, c3 - a3, a3 - a5
  a5		a3 - a5, c3 - a3, a5 - c3, d2 - b4, c1 - c3, b4 - d2, e1 - c3, a1 - c1, a2 - a4, d1 - b1, b1 - b3, c3 - a3, a4 - a2
  c1		a3 - c1, b4 - b2, a5 - a3, d2 - b4, c1 - c3, b4 - d2, e1 - c3, a1 - c1, a2 - a4, d1 - b1, b1 - b3, c3 - a3, a3 - a5
  c1		a3 - c1, b4 - b2, a5 - a3, d2 - b4, c1 - c3, b4 - d2, e1 - c3, a1 - c1, a2 - a4, d1 - b1, b1 - b3, c3 - a3, a4 - a2
  a2		a4 - a2, c3 - a3, a5 - c3, d2 - b4, c1 - c3, b4 - d2, e1 - c3, a1 - c1, a2 - a4, d1 - b1, b1 - b3, c3 - a3, a4 - a2
  a2		a4 - a2, c3 - a3, a5 - c3, a2 - a4, c1 - a3, a4 - a2, a1 - a3, e1 - c1, b1 - d1, d1 - b3, d2 - b4, a3 - c3, b4 - d2
  c1		a1 - c1, d1 - b1, a3 - c1, a5 - a3, b1 - d1, c3 - c1, e1 - c3, a2 - a4, a4 - c2, b4 - d2, d2 - b2, d1 - b1, b1 - b3
  c1		a1 - c1, d1 - b1, c3 - c1, e1 - c3, b4 - d2, a3 - c3, d2 - b4, a5 - c3, c1 - a1, a1 - a3, a4 - a2, a2 - c2, c3 - c1
*/

int main() {
	int menu;

	//Start screen 
	while (true) {
		system("CLS");

		displayStart();
		printColorText("\nWelcome to Peg Solitaire! Enter a option.\n", 14);
		printColorText("[1] Rules\n", 14);
		printColorText("[2] Start Game\n", 14);
		printColorText("[3] Quit\n", 14);

		cin >> menu;

		if (!cin) {
			cin.clear();
			cin.ignore(999, '\n');
		}

		switch (menu) {
		case 1:
			displayRule();
			system("PAUSE");
			system("CLS");
			break;

		case 2:
			gameLoop();
			break;

		case 3:
			return 0;
		}

	}

}


//Game Loop 
void gameLoop() {
	string oCoord, dCoord;
	bool game = true;

	//Initialize game 
	game = initBoard();

	while (game) {
		countJump = countPosJump();

		if (countJump == 0) {

			printColorText("No possible moves", 14);
			printColorText("\nYou finished board with " + to_string(countPeg()) + " peg(s) left and in " + to_string(countMove) + " moves.\n", 14);
			cout << '\a'; // windows sound

			if (countPeg() == 1) {
				printColorText("CONGRATULATIONS!!! YOU WON THE GAME\n", 5);
			}

			if (playAgain("\nDo you want to play another game? (y/n): ")) {
				if (initBoard())
					continue;

			}
			break;
		}
		printColorText("There are " + to_string(countJump) + " possible moves.\n", 14);

		oCoord = validCoord("Enter the coordinate of the peg you want to move (ex.a1): ");
		if (oCoord == "exit")
			break;

		dCoord = validCoord("Enter the coordinate of destination: ");
		if (dCoord == "exit")
			break;


		if (validJump(coord2Index(oCoord), coord2Index(dCoord))) {
			countMove++;
			displayBoard();
		}
		else
			printColorText("You made an invalid jump.\n", 4);
	}
}

