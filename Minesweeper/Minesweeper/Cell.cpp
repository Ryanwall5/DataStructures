#include "stdafx.h"

Cell::Cell()
{
	m_stateCount = 0;
}
void Cell::setValue(char value)
{

	m_value = m_character.getValue(value);
}
char Cell::getInitialState()
{
	return m_initialState;
}
char Cell::getValue()
{
	return m_value;
}

int Cell::getCount()
{
	return m_stateCount;
}

void Cell::increaseCount()
{
	m_stateCount = 1;
}