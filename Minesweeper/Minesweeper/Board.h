
#ifndef Board_H
#define Board_H 

//#include "..\..\Array2D_Ryanwall\Array2D_Ryanwall\Array2D.h"
//#include "Array2D.h"
#include "Cell.h"
#include "Characters.h"
#include "stdafx.h"

//template <class T>
//class Array2D;

class Board 
{
public:
	Board(int row, int column, int mines);
	~Board();
	char lookUpCharAtLocation(int row, int column);
	void drawBoard();
	void initializeBoard();
	int numberOfMinesWithinRadius(int row, int column, int count);
	void drawBoardWithValues();
	void setMarkedLocation(int row, int column);
private:
	
	Array2D<Cell> m_boardArray;
	Characters m_characters;
	int m_row;
	int m_column;
	int m_mineamount;
};

#endif // !1