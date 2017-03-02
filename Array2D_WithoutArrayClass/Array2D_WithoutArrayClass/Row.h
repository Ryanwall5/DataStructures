
#ifndef ROW_H
#define ROW_H

#include "Array2D.h"
#include "stdafx.h"
template<class T>
class Array2D;

template <class T>
class Row
{
public:
	Row(Array2D<T>& array, int row);

	T& operator[](int column) const;

private:
	Array2D<T>& m_array2D;
	int m_row;
};

template<class T>
Row<T>::Row(Array2D<T>& array, int row) : m_array2D(array), m_row(row)
{

}

template<class T>
T & Row<T>::operator[](int column) const
{
	if (column > m_array2D.getColumn() || column < 0)
	{
		delete this;
		Exception e;
		e.setMessage("trying to access array outside of its bounds");
		throw e;
	}
	
	T &value = this->m_array2D.Select(m_row, column);
	delete this;
	return value;
}


#endif 
