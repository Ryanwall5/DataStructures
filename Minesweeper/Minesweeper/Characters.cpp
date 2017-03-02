#include "stdafx.h"
#include "Characters.h"

char Characters::getValue(char value)
{
	if (value == m_initialstate)
		return m_initialstate;

	else if (value == m_marked)
		return m_marked;

	else if (value == m_mine)
		return m_mine;

	else if (value == m_number1)
		return m_number1;

	else if (value == m_number2)
		return m_number2;

	else if (value == m_number3)
		return m_number3;

	else if (value == m_number3)
		return m_number3;

	else if (value == m_number4)
		return m_number4;

	else if (value == m_number5)
		return m_number5;

	else if (value == m_number6)
		return m_number6;

	else if (value == m_number7)
		return m_number7;

	else if (value == m_number7)
		return m_number7;
	else
		return m_blank;
}
