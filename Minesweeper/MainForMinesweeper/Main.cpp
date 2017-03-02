#include <iostream>
#include "../Minesweeper/Minesweeper.h"
using namespace std;


int main()
{
	try {
		menu choice;
		bool playagain = true;
		char play = 'y';
		while (playagain) {
			char difficulty = choice.difficultyChoice();
			int row = 0;
			int column = 0;
			int mines = 0;
			switch (difficulty)
			{

			case 'b':
			{
				row = 10;
				column = 10;
				mines = 10;
				Minesweeper msweeper(row, column, mines);
				msweeper.playMinesweeper();
				break;
			}
			case 'i':
			{
				row = 16;
				column = 16;
				mines = 40;
				Minesweeper msweeper(row, column, mines);
				msweeper.playMinesweeper();
				break;
			}
			case 'e':
			{
				row = 16;
				column = 30;
				mines = 100;
				Minesweeper msweeper(row, column, mines);
				msweeper.playMinesweeper();
				break;
			}
			default:
				cout << "That difficulty is not a choice please choose again!" << endl;

			}
			cout << "Do you want to play again? (y/n)" << endl;
			cin >> play;
			if (play == 'y' || play == 'Y')
			{
				playagain = true;
			}
			else
			{
				playagain = false;
				cout << "Thanks For Playing My Minesweeper Game Hope You Had Fun!" << endl;
			}
		}
	}
	catch (Exception &e)
	{
		cout << e.getMessage() << endl;
	}


	return 0;
}