
//Ryan Wall
//assignment 1 single dimension array
//due date 1/28/2017 11:59pm


#ifndef EXCEPTION_H
#define EXCEPTION_H
#include "stdafx.h"
#include <iostream>
using namespace std;
class Exception {

public:
	Exception();
	Exception(const char *msg);
	Exception(const Exception &);
	virtual ~Exception();
	Exception& operator=(const Exception &);
	const char* getMessage();
	void setMessage(char*);
	friend ostream& operator<<(ostream& o, const Exception &e);

private:
	char m_msg[256];

};

#endif