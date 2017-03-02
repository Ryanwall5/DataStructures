
//Ryan Wall
//assignment 1 single dimension array
//due date 1/28/2017 11:59pm

#include "stdafx.h"

Exception::Exception()
{
	strcpy_s(this->m_msg, "Default Constructor");
}

Exception::Exception(const char * msg)
{
	strcpy_s(this->m_msg, msg);
}

Exception::Exception(const Exception & e)
{
	strcpy_s(this->m_msg, e.m_msg);
}

Exception::~Exception()
{

}

Exception & Exception::operator=(const Exception &exception)
{
	strcpy_s(this->m_msg, exception.m_msg);
	return *this;
}

const char * Exception::getMessage()
{
	return this->m_msg;
}

void Exception::setMessage(char * msg)
{
	strcpy_s(this->m_msg, msg);
}

ostream & operator<<(ostream & o, const Exception & e)
{
	return o;
}