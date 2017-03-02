#ifndef ARRAY2D_H
#define ARRAY2D_H


#include "stdafx.h"
#include "Row.h"
#include "Exception.h"

template<class T> 
class Row;


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
	void setColumn(int columns);
	
	int getColumn();
	const int getColumn() const { return m_col; };

	T & Select(int row, int column);

protected:
	T** m_array;
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
	if (row*col < 0)
	{
		Exception e;
		e.setMessage("the length you tried to set is negative, which isn't a valid length for an array.");
		throw e;
	}
	m_array = new T*[row];

	for (int i = 0; i < row; i++)
	{
		m_array[i] = new T[col];
	}
}

template<class T>
Array2D<T>::Array2D(const Array2D & copy)
{
	m_col = copy.m_col;
	m_row = copy.m_row;

	m_array = new T*[m_row];

	for (int i = 0; i < m_row; i++)
	{
		m_array[i] = new T[m_col];
	}

	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = copy.m_array[i][j];
		}
	}
}

template<class T>
Array2D<T>::~Array2D()
{
	for (int i = 0; i < getRow(); i++)
	{
		delete[] m_array[i];
	}
	delete[] m_array;
}

template<class T>
Array2D<T> & Array2D<T>::operator=(const Array2D & rhs)
{
	
	for (int i = 0; i < getRow(); i++)
	{
		delete[] m_array[i];
	}
	delete[] m_array;

	m_col = rhs.m_col;
	m_row = rhs.m_row;
	m_array = new T*[m_row];

	for (int i = 0; i < m_row; i++)
	{
		m_array[i] = new T[m_col];
	}

	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = rhs.m_array[i][j];
		}
	}

	return *this;
}

template<class T>
Row<T>& Array2D<T>::operator[](int index)
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
	if (index < 0 || index > m_row)
	{
		Exception e;
		e.setMessage("You are trying to access the array outside its bounds.");
		throw e;
	}

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
	//create a temp array
	T** temp = new T*[rows];

	for (int i = 0; i < rows; i++)
	{
		temp[i] = new T[m_col];
	}

	// fill up temp array with everything that was in m_array
	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			temp[i][j] = m_array[i][j];
		}
	}

	//delete m_array
	for (int i = 0; i < m_row; i++)
	{
		delete[] m_array[i];
	}
	delete[] m_array;


	//reinitialize m_array to the new length
	m_array = new T*[rows];

	for (int i = 0; i < rows; i++)
	{
		m_array[i] = new T[m_col];
	}

	//copy everything back over from the temp array to m_array
	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = temp[i][j];
		}
	}

	// delete the temp array
	for (int i = 0; i < rows; i++)
	{
		delete[] temp[i];
	}
	delete[] temp;

	// set array2d member variable m_row equal to the new amount of rows. 
	m_row = rows;

}

template<class T>
int Array2D<T>::getColumn()
{
	return m_col;
}

template<class T>
void Array2D<T>::setColumn(int columns)
{

	//create a temp array
	T** temp = new T*[m_row];

	for (int i = 0; i < m_row; i++)
	{
		temp[i] = new T[columns];
	}

	// fill up temp array with everything that was in m_array
	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			temp[i][j] = m_array[i][j];
		}
	}

	//delete m_array
	for (int i = 0; i < m_row; i++)
	{
		delete[] m_array[i];
	}
	delete[] m_array;


	//reinitialize m_array to the new length
	m_array = new T*[m_row];

	for (int i = 0; i < m_row; i++)
	{
		m_array[i] = new T[columns];
	}

	//copy everything back over from the temp array to m_array
	for (int i = 0; i < m_row; i++)
	{
		for (int j = 0; j < m_col; j++)
		{
			m_array[i][j] = temp[i][j];
		}
	}

	// delete the temp array
	for (int i = 0; i < m_row; i++)
	{
		delete[] temp[i];
	}
	delete[] temp;

	// set array2d member variable m_row equal to the new amount of rows. 
	m_col = columns;
}

template<class T>
 T & Array2D<T>::Select(int row, int column)
{
	 T &value = *((*(m_array+row))+column);
	 return value;
}
#endif