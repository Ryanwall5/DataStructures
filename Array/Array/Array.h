//Ryan Wall
//assignment 1 single dimension array
//due date 1/28/2017 11:59pm

#ifndef Array_H
#define Array_H
#include "stdafx.h"

template < class T >
class Array {

public:
	Array();
	Array(int length, int start_index = 0);
	Array(const Array &copy);
	~Array();
	Array &operator=(const Array &rhs);
	T &operator[](int index);
	int getStartIndex();
	void setStartIndex(int start_index);
	int getLength();
	void setLength(int length);

private:
	T * m_array;
	int m_length;
	int m_start_index;

};



template<class T>
Array<T>::Array()
{
}

template<class T>
Array<T>::Array(int length, int start_index = 0) :
	m_length(length),
	m_start_index(start_index)

{
	if (length < 0)
	{
		Exception e;
		e.setMessage("the length you tried to set is negative, which isn't a valid length for an array.");
		throw e;
	}
	else{
		m_array = new T[getLength()]();
	}
	
	
}

template<class T>
Array<T>::Array(const Array &copy)
{

	m_start_index = copy.m_start_index;
	m_length = copy.m_length;
	m_array = new T[m_length];
	for (int i = 0; i < m_length; i++)
	{
		m_array[i] = copy.m_array[i];
	}

}

template<class T>
Array<T>::~Array()
{
	cout << "inside deconstructor" << endl;

	if (m_array != NULL)
	{
		delete[] m_array;
	}
}

template<class T>
Array<T> & Array<T>::operator=(const Array & rhs)
{
	
	if (this == &rhs)
	{
		return  *this;
	}

	delete[] m_array;
	m_start_index = rhs.m_start_index;
	m_length = rhs.m_length;
	m_array = new T[m_length];
	for (int i = 0; i < rhs.m_length; i++) {
		m_array[i] = rhs.m_array[i];
	}

	return *this;

}

template<class T>
T & Array<T>::operator[](int index)
{

	Exception e;

	if (index > m_start_index + m_length || index < m_start_index)
	{
		string error = "You tried to access index ";
		string error2 = ", which is out of bounds";
		string error3 = error + to_string(index) + error2;

		char * errorStatement = new char[error3.length() + 1];

		strcpy_s(errorStatement, error3.length() + 1, error3.c_str());

		e.setMessage(errorStatement);
		delete[] errorStatement;
		throw e;

	}

	return m_array[index - m_start_index];

}

template<class T>
int Array<T>::getStartIndex()
{
	return m_start_index;
}

template<class T>
void Array<T>::setStartIndex(int start_index)
{
	m_start_index = start_index;

}

template<class T>
int Array<T>::getLength()
{
	
	return m_length;
}

template<class T>
void Array<T>::setLength(int length)
{
	//checking to see if length is valid
	if (length < 0)
	{
		Exception e;
		e.setMessage("the length you tried to set is negative, which isn't a valid length for an array.");
		throw e;
	}
	else if (length != m_length && m_length != 0)
	{
		T *  a1 = new T[length];
		for (int i = 0; i < length; i++)
		{
			a1[i] = m_array[i];
		}
		delete[] m_array;

		m_array = a1;
		
		m_length = length;
		
	}
	else
	{
		m_array = new T[length];
		m_length = length;
	}
	
}

#endif
