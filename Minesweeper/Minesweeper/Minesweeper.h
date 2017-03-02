#ifndef MINESWEEPER_H
#define MINESWEEPER_H

#include "Board.h"
#include "stdafx.h"

class Minesweeper
{
public:

	Minesweeper(int row, int column, int mines);
	void playMinesweeper();

private:
	Board m_boardForGame;

};

#endif
