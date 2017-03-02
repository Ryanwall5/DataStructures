#ifndef CELL_H
#define CELL_H
#include "Characters.h"
#include "stdafx.h"

class Cell {
public:
	Cell();
	void setValue(char value);
	char getInitialState();
	char getValue();
	int getCount();
	void increaseCount();

private:
	Characters m_character;
	char m_value;
	int m_stateCount;
	int m_initialState = (char)178;
};


#endif // !CELL_H