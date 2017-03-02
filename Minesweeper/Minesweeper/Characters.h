#ifndef CHARACTERS_H
#define CHARACTERS_H


#include "stdafx.h"
class Characters 
{
public:
	char getValue(char value);
	char getMine() { return m_mine; };
	char getMarked() { return m_marked; };
	char getNumber() { return m_number1; };
	char getInitialState() { return m_initialstate; };

private:
	char m_mine = '*';
	char m_marked = 'M';
	char m_number1 = '1';
	char m_number2 = '2';
	char m_number3 = '3';
	char m_number4 = '4';
	char m_number5 = '5';
	char m_number6 = '6';
	char m_number7 = '7';
	char m_number8 = '8';
	char m_initialstate = (char)178;
	char m_blank = 'B';
};
#endif // !1