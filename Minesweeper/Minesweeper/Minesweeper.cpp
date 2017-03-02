#include "stdafx.h"




Minesweeper::Minesweeper(int row, int column, int mines) : m_boardForGame(row, column, mines)
{
	
}

void Minesweeper::playMinesweeper()
{
	int rowchoice;
	int columnchoice;
	int choice;
	char mine = '*';
	char blank = 'B';
	cout << "To play the game you will be prompted to pick a row and then a column" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	bool winner = true;
	while (winner)
	{
	
		cout << "Press 1 if you want to Mark the board for a possible bomb location" << endl;
		cout << "Press 2 if you want to uncover a cell" << endl << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				cout << "Pick a row:  ";
				cin >> rowchoice;
				cout << endl;
				cout << "Pick a column:  ";
				cin >> columnchoice;
				cout << endl;

				m_boardForGame.setMarkedLocation(rowchoice, columnchoice);
				m_boardForGame.drawBoard();
				break;
			}
			case 2:
			{
				cout << "Pick a row:  ";
				cin >> rowchoice;
				cout << endl;
				cout << "Pick a column:  ";
				cin >> columnchoice;
				cout << endl;

				char charfound = m_boardForGame.lookUpCharAtLocation(rowchoice, columnchoice);
				if (charfound == mine)
				{
					m_boardForGame.drawBoardWithValues();
					cout << "You have found a mine. Sorry you lose!" << endl;
					winner = false;
				}
			/*	else if (charfound == blank)
				{
					int i = 0;
					while (charfound != blank)
					{
						charfound = m_boardForGame.lookUpCharAtLocation(rowchoice, columnchoice);
					}
				}*/
				else
				{
					m_boardForGame.drawBoard();
				
				}

				break;
			}
			default: 
				cout << "You did not choose option 1 or 2 choose one of those please!" << endl;
		}
	}

}




