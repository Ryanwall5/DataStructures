
#include "stdafx.h"




Board::Board(int row, int column, int mines) : m_mineamount(mines), m_row(row), m_column(column), m_boardArray(row, column)
{
	drawBoard();
	initializeBoard();
}


Board::~Board()
{
}

void Board::setMarkedLocation(int row, int column)
{
	m_boardArray[row][column].increaseCount();
	m_boardArray[row][column].setValue(m_characters.getMarked());
}

char Board::lookUpCharAtLocation(int row, int column)
{

	m_boardArray[row][column].increaseCount();
	return m_boardArray[row][column].getValue();
}


void Board::drawBoard()
{

	cout << endl;
	
	cout << "  ";
	for (int i1 = 0; i1 < m_column; i1++)
	{
		cout << " | " << i1;
	}
	cout << " |" << endl;

	for (int i = 0; i < m_row; i++)
	{
		if (i < 10)
		{
			cout << i << " ";
		}
		else
		{
			cout << i;
		}
		for (int j = 0; j < m_column; j++)
		{
			if (j > 9)
			{
				if (m_boardArray[i][j].getCount() == 0)
				{
					cout << " |  " << m_boardArray[i][j].getInitialState();
				}
				else if (m_boardArray[i][j].getCount() == 1)
				{
					cout << " |  " << m_boardArray[i][j].getValue();
				}
			}
			else
			{
				if (m_boardArray[i][j].getCount() == 0)
				{
					cout << " | " << m_boardArray[i][j].getInitialState();
				}
				else if (m_boardArray[i][j].getCount() == 1)
				{
					cout << " | " << m_boardArray[i][j].getValue();
				}
			}
		}
		cout << " |" << endl;

	}
	cout << endl;
}


void Board::drawBoardWithValues()
{
	cout << endl;

	cout << "  ";
	for (int i = 0; i < m_column; i++)
	{
		cout << " | " << i;
	}
	cout << " |" << endl;

	for (int i = 0; i < m_row; i++)
	{
		if (i < 10)
		{
			cout << i << " ";
		}
		else
			cout << i;
		for (int j = 0; j < m_column; j++)
		{
			if (j > 9)
			{		
					cout << " |  " << m_boardArray[i][j].getValue();	
			}
			else
			{
				cout << " | " << m_boardArray[i][j].getValue();
			}
			
		}
		cout << " |" << endl;

	}
	cout << endl;
}


void Board::initializeBoard()
{
	int Arraylength = m_row*m_column;
	
	int tempMineAmount = m_mineamount;

	srand((int)time(NULL));
	int value = 0;

	while (tempMineAmount > 0)
	{
		
		int number = rand() % Arraylength;
		int colnum = number % m_column;
		int rownum = number / m_row;
		if (colnum != 0)
		{
			colnum = colnum - 1;
		}
		if (m_boardArray[rownum][colnum].getValue() == m_characters.getMine())
		{
			continue;
		}
		m_boardArray[rownum][colnum].setValue(m_characters.getMine());
		tempMineAmount--;

	}
	

	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_column; j++)
		{
			m_boardArray[i][j].getValue();
			if (m_boardArray[i][j].getValue() == m_characters.getMine())
			{
				continue;
			}
			else
			{
				int count = 0;
				count = numberOfMinesWithinRadius(i, j - 1, count);
				count = numberOfMinesWithinRadius(i, j + 1, count);
				count = numberOfMinesWithinRadius(i - 1, j, count);
				count = numberOfMinesWithinRadius(i - 1, j - 1, count);
				count = numberOfMinesWithinRadius(i - 1, j + 1, count);
				count = numberOfMinesWithinRadius(i + 1, j, count);
				count = numberOfMinesWithinRadius(i + 1, j - 1, count);
				count = numberOfMinesWithinRadius(i + 1, j + 1, count);
			
				m_boardArray[i][j].setValue((char)48 + count);
			}
		}
	}

}

int Board::numberOfMinesWithinRadius(int row, int column, int count)
{

	if (row < 0 || row >= m_row)
	{
		return count;
	}
	else if (column < 0 || column >= m_column)
	{
		return count;
	}
	else if (m_boardArray[row][column].getValue() == m_characters.getMine())
	{
		++count;
		return count;
	}
	else
	return count;
}
