//Ryan Wall
//assignment 1 single dimension array
//due date 1/28/2017 11:59pm

#include "../Array/Array.h"
//#include "Array2D.h" 
						

//checks to see if the length is a valid length
void validLengthTest()
{
	cout << "Inside Valid length test " << endl;
	cout << "--------------------------" << endl;
	try{
		Array<int> a2(11);
	a2.setLength(20);
	cout << "The new array length = " << a2.getLength() << endl;

	for (int i = a2.getStartIndex(); i < a2.getLength() + a2.getStartIndex(); i++)
	{
		cout << "array[" << i << "] = " << a2[i] << endl;
	}
	

	}

	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}


	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
	system("pause");

}


void userOutOfBoundsTest()
{
	cout << "Inside User Out Of Bounds Test" << endl;
	cout << "------------------------------" << endl;
	try {
		Array<int> a2(11);
		//this will work for array a2
		a2[10] = 6;

		//this is going to throw an exception for array out of bounds
		a2[30] = 5;
	
	}
	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
	system("pause");
}


void setArrayLengthTest()
{
	cout << "Inside Set Array Length Test" << endl;
	cout << "------------------------------" << endl;
	try {
		Array<int> a2(11);
		// this is going to set the length of array to be smaller than what it was
		a2.setLength(5);

		// this is just going to output that the array has shrunk successfully
		for (int i = a2.getStartIndex(); i < a2.getLength() + a2.getStartIndex(); i++)
		{
			cout << "array[" << i << "] = " << a2[i] << endl;
		}
	}
	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}


	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
	system("pause");
}


void setStartingIndexTest()
{

	cout << "Inside Set Starting Index Test" << endl;
	cout << "------------------------------" << endl;
	try{
		Array<int> a2(11);
		a2.setStartIndex(-1);

	for (int i = a2.getStartIndex(); i < a2.getLength() + a2.getStartIndex(); i++)
	{
		cout << "array[" << i << "] = " << a2[i] << endl;
	}

	}
	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}


	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
	system("pause");
}


void tryExceptionTests()
{
	cout << "Inside Try Exception Tests" << endl;
	cout << "------------------------------" << endl;
	try {
		Array<int> a2(11);
		cout << "the starting index = " << a2.getStartIndex() << endl;
		cout << "the length = " << a2.getLength() << endl;
		//trys to index something smaller than starting index
		a2[-1] = 5;

	}
	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}

	try {
		Array<int> a1(11);
		cout << "the starting index = " << a1.getStartIndex() << endl;
		cout << "the length = " << a1.getLength() << endl;
		
		//trys to index something bigger than starting index
		a1[20] = 10;

	}
	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
	system("pause");


}

void testoperators() 
{
	try {
		Array<int> a2(10, 2);
		cout << "Array a2 original " << endl;
		cout << "the starting index = " << a2.getStartIndex() << endl;
		cout << "the length = " << a2.getLength() << endl;
		int num = 2;
		for (int i = a2.getStartIndex(); i < a2.getLength() + a2.getStartIndex(); i++)
		{
			a2[i] = i * 2;
			cout << "array[" << i << "] = " << a2[i] << endl;
		}
		Array<int> a3(13, 0);

		a2 = a3;
		cout << "Array a2 after seting it equal to a3 " << endl;
		cout << "the starting index = " << a2.getStartIndex() << endl;
		cout << "the length = " << a2.getLength() << endl;

		for (int i = a2.getStartIndex(); i < a2.getLength() + a2.getStartIndex(); i++)
		{
			cout << "array[" << i << "] = " << a2[i] << endl;
		}

		Array<int> a4(a2);
		cout << "Array a4 " << endl;
		cout << "the starting index = " << a4.getStartIndex() << endl;
		cout << "the length = " << a4.getLength() << endl;

		for (int i = a4.getStartIndex(); i < a4.getLength() + a4.getStartIndex(); i++)
		{
			cout << "array[" << i << "] = " << a4[i] << endl;
		}


	}
	catch (Exception &e)
	{
		cout << e.getMessage() << endl;
	}

	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();
	system("pause");

}


//void testArray2DOutOfBounds() {
//	
//	try {
//		Array2D<int> arr2d(4, 5);
//
//
//		arr2d[5][5] = 0;
//	}
//	catch (Exception& e)
//	{
//		cout << e.getMessage() << endl;
//	}
//	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
//	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
//	_CrtDumpMemoryLeaks();
//	system("pause");
//	try {
//
//		Array2D<int> arr2d2(4, 5);
//
//
//		arr2d2[-1][5] = 0;
//
//	}
//	catch (Exception& e)
//	{
//		cout << e.getMessage() << endl;
//	}
//	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
//	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
//	_CrtDumpMemoryLeaks();
//	system("pause");
//}
//
//void testArray2DCreateAConstObject() {
//	try {
//
//		const Array2D<int> Arr2d(2, 2);
//
//		int num2 = 2;
//		int num1 = 1;
//		for (int i = 0; i < Arr2d.getRow(); i++)
//		{
//			for (int j = 0; j < Arr2d.getColumn(); j++)
//			{
//				Arr2d[i][j] = num1 * num2;
//				num1++;
//			}
//		}
//		for (int i = 0; i < Arr2d.getRow(); i++)
//		{
//			for (int j = 0; j < Arr2d.getColumn(); j++)
//			{
//				cout << "Const Array [" << i << "][" << j << "] = " << Arr2d[i][j] << endl;
//			}
//		}
//
//
//	}
//	catch (Exception& e)
//	{
//		cout << e.getMessage() << endl;
//	}
//
//	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
//	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
//	_CrtDumpMemoryLeaks();
//	system("pause");
//
//}
//void testArray2DCopyConstructorAndOperatorEquals() {
//	try {
//
//		Array2D<int> A1D1(2, 2);
//
//		int num2 = 2;
//		int one = 1;
//		for (int i = 0; i < A1D1.getRow(); i++)
//		{
//			for (int j = 0; j < A1D1.getColumn(); j++)
//			{
//				A1D1[i][j] = one * num2;
//				cout << "A1D1[" << i << "]" << "[" << j << "] = " << A1D1[i][j] << endl;
//				num2++;
//			}
//		}
//
//		Array2D<int> A2D1(A1D1);
//		cout << endl;
//		for (int i = 0; i < A2D1.getRow(); i++)
//		{
//			for (int j = 0; j < A2D1.getColumn(); j++)
//			{
//				cout << "A2D1[" << i << "]" << "[" << j << "] = " << A2D1[i][j] << endl;
//			}
//
//		}
//
//
//	}
//	catch (Exception& e)
//	{
//		cout << e.getMessage() << endl;
//	}
//
//	try {
//
//		Array2D<int> A1D1(2, 2);
//		int num2 = 2;
//		int one = 1;
//		for (int i = 0; i < A1D1.getRow(); i++)
//		{
//			for (int j = 0; j < A1D1.getColumn(); j++)
//			{
//				A1D1[i][j] = one * num2;
//				cout << "A1D1[" << i << "]" << "[" << j << "] = " << A1D1[i][j] << endl;
//				num2++;
//			}
//		}
//
//		Array2D<int> A3D1(3, 5);
//		A1D1 = A3D1;
//
//		for (int i = 0; i < A1D1.getRow(); i++)
//		{
//			for (int j = 0; j < A1D1.getColumn(); j++)
//			{
//				cout << "A1D1[" << i << "]" << "[" << j << "] = " << A1D1[i][j] << endl;	
//			}
//		}
//	}
//	catch (Exception& e)
//	{
//		cout << e.getMessage() << endl;
//	}
//
//	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
//	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
//	_CrtDumpMemoryLeaks();
//	system("pause");
//}
//void testArray2DMutators()
//{
//	try {
//
//		Array2D<int> A1D1(2, 2);
//		int one = 1;
//		int num2 = 2;
//		for (int i = 0; i < A1D1.getRow(); i++)
//		{
//			for (int j = 0; j < A1D1.getColumn(); j++)
//			{
//				A1D1[i][j] = one * num2;
//				cout << "A1D1[" << i << "]" << "[" << j << "] = " << A1D1[i][j] << endl;
//				num2++;
//			}
//		}
//
//		cout << endl;
//		A1D1.setColumn(4);
//		cout << "After setting Column length" << endl;
//		for (int i = 0; i < A1D1.getRow(); i++)
//		{
//			for (int j = 0; j < A1D1.getColumn(); j++)
//			{
//				A1D1[i][j] = one * num2;
//				cout << "A1D1[" << i << "]" << "[" << j << "] = " << A1D1[i][j] << endl;
//				num2++;
//			}
//		}
//
//		A1D1.setRow(4);
//		cout << endl;
//		cout << "After setting Row length" << endl;
//		for (int i = 0; i < A1D1.getRow(); i++)
//		{
//			for (int j = 0; j < A1D1.getColumn(); j++)
//			{
//				A1D1[i][j] = one * num2;
//				cout << "A1D1[" << i << "]" << "[" << j << "] = " << A1D1[i][j] << endl;
//				num2++;
//			}
//		}
//	}
//	catch (Exception& e)
//	{
//		cout << e.getMessage() << endl;
//	}
//	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
//	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
//	_CrtDumpMemoryLeaks();
//	system("pause");
//}
int main()
{

		validLengthTest(); // checking to see if i can set lengths to make sure they are valid or not
		userOutOfBoundsTest(); // checks for user out of bounds
		
		setArrayLengthTest();
		setStartingIndexTest();
		tryExceptionTests();
		//testArray2D();

		//testArray2DOutOfBounds();
		//testArray2DCreateAConstObject();
		//testArray2DCopyConstructorAndOperatorEquals();
		//testArray2DMutators();
		//testoperators();
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_FILE);
	_CrtSetReportFile(_CRT_WARN, _CRTDBG_FILE_STDOUT);
	_CrtDumpMemoryLeaks();

	system("pause");

	return 0;
}