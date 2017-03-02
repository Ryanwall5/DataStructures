
#ifndef ARRAY2D_H
#define ARRAY2D_H
#include "..\..\Array\Array\Array.h"

#include "Row.h"
#include "stdafx.h"

template <class T>
class Array;



template < class T >
class Array2D {
public:

	Array2D();
	Array2D(int row, int col);
	Array2D(const Array2D &copy);
	~Array2D();
	Array2D &operator=(const Array2D &rhs);
	Row<T> &operator[](int index);
	Row<T> &operator[](int index) const;

	const int getRow() const { return m_row; };
	
	int getRow();
	void setRow(int rows);
	int getColumn();

	const int getColumn() const { return m_col; };

	void setColumn(int columns);
	T & Select(int row, int column);

protected:
	Array<T> m_array;
	int m_row;
	int m_col;


};



template<class T>
Array2D<T>::Array2D()
{
}

template<class T>
Array2D<T>::Array2D(int row, int col) :
	m_row(row),
	m_col(col)
{
	m_array.setLength(row*col);
}

template<class T>
Array2D<T>::Array2D(const Array2D & copy)
{
	int length = copy.m_row*copy.m_col;
	m_array.setLength(length);

	int increment = 0;
	for (int i = 0; i < copy.m_row; i++)
	{
		for (int j = 0; j < copy.m_col; j++) 
		{
			m_array[increment] = copy[i][j];
			cout << m_array[increment] << endl;
			increment++;
		}
	}


	m_row = copy.m_row;
	m_col = copy.m_col;
}


template<class T>
Array2D<T>::~Array2D()
{

}

template<class T>
Array2D<T> & Array2D<T>::operator=(const Array2D & rhs)
{

	m_array = rhs.m_array;

	m_col = rhs.m_col;
	m_row = rhs.m_row;
	return *this;
}

template<class T>
Row<T> & Array2D<T>::operator[](int index)
{
	if (index < 0 || index > m_row)
	{
		Exception e;
		e.setMessage("You are trying to access the array outside its bounds.");
		throw e;
	}
	
	
	Row<T>* row;
	row = new Row<T>(*this, index);
	return *row;
}

template<class T>
Row<T>& Array2D<T>::operator[](int index) const
{
	Row<T>* row;
	row = new Row<T>(const_cast<Array2D<T>&>(*this), index);
	return *row;
}



template<class T>
int Array2D<T>::getRow()
{
	return m_row;
}

template<class T>
void Array2D<T>::setRow(int rows)
{
	// this needs to change the value in the rows class as well.
	m_row = rows;
	m_array.setLength(m_row*m_col);
}

template<class T>
int Array2D<T>::getColumn()
{
	return m_col;
}

template<class T>
void Array2D<T>::setColumn(int columns)
{
	m_col = columns;
	m_array.setLength(m_row*m_col);
}
template<class T>
T & Array2D<T>::Select(int row, int column)
{
	int value = 0;
	if (row == 0)
	{
		value = row + column;
	}
	else 
	{ 
		value = 1;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j <= column; j++)
			{
				value++;
			}
		}
	}


	return m_array[value];
}

#endif