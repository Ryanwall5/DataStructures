
#include "../Array2D_WithoutArrayClass/Array2D.h"
#include"../Array2D_WithoutArrayClass/Exception.h"

void testfunctionality()
{
	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test functionality " << endl;
	cout << "______________________________________" << endl;
	try {
		Array2D<int> A2D1(2, 3);
		Array2D<int> A3D1(2, 3);
		int num = 1;
		int num2 = 2;
		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
				A2D1[i][j] = num * num2;
				++num;
				cout << "this is i = " << i << endl;
				cout << "this is j = " << j <<  endl;
 				cout << A2D1[i][j] << endl;
			}

		}

		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
			
				cout << A2D1[i][j] << endl;
			}

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
void testOpertorEquals() {

	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test operator equals " << endl;
	cout << "______________________________________" << endl;
	try {

		Array2D<int> A2D1(2, 3);
		Array2D<int> A3D1(2, 5);

		int num = 1;
		int num2 = 2;
		cout << "______________________________________" << endl;
		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
				A2D1[i][j] = num * num2;
				++num;
				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

		}	

		cout << "______________________________________" << endl;
		
		for (int i = 0; i < A3D1.getRow(); i++)
		{
			for (int j = 0; j < A3D1.getColumn(); j++)
			{

				cout << "Array A3D1 [" << i << "][" << j << "] = " << A3D1[i][j] << endl;
			}

		}

		A3D1 = A2D1;
		cout << "______________________________________" << endl;
		for (int i = 0; i < A3D1.getRow(); i++)
		{
			for (int j = 0; j < A3D1.getColumn(); j++)
			{
			
				cout << "Array A3D1 [" << i << "][" << j << "] = " << A3D1[i][j] << endl;
			}

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
 
void testCopyConstructor()
{
	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test copy constructor " << endl;
	cout << "______________________________________" << endl;
	try {

		Array2D<int> A2D1(2, 3);
		

		int num = 1;
		int num2 = 2;
		cout << "______________________________________" << endl;
		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
				A2D1[i][j] = num * num2;
				++num;
				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

		}


		// call to copy constructor to copy a2d1 into a3d1
		Array2D<int> A3D1(A2D1);




		cout << "______________________________________" << endl;

		for (int i = 0; i < A3D1.getRow(); i++)
		{
			for (int j = 0; j < A3D1.getColumn(); j++)
			{

				cout << "Array A3D1 [" << i << "][" << j << "] = " << A3D1[i][j] << endl;
			}

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


void testSetRow() {
	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test set row " << endl;
	cout << "______________________________________" << endl;
	try {


		Array2D<int> A2D1(2, 3);


		int num = 1;
		int num2 = 2;
		cout << "______________________________________" << endl;
		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
				A2D1[i][j] = num * num2;
				++num;
				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

		}

		A2D1.setRow(5);

		cout << "______________________________________" << endl;

		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{

				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

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

void testSetColumn()
{
	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test set column " << endl;
	cout << "______________________________________" << endl;
	try {


		Array2D<int> A2D1(2, 3);


		int num = 1;
		int num2 = 2;
		cout << "______________________________________" << endl;
		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
				A2D1[i][j] = num * num2;
				++num;
				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

		}

		A2D1.setColumn(5);

		cout << "______________________________________" << endl;

		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{

				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

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

void testConstness()
{
	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test constness " << endl;
	cout << "______________________________________" << endl;
	try {


		const Array2D<int> A2D1(2, 3);


		int num = 1;
		int num2 = 2;
		cout << "______________________________________" << endl;
		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{
				A2D1[i][j] = num * num2;
				++num;
				//cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

		}

		cout << "______________________________________" << endl;

		for (int i = 0; i < A2D1.getRow(); i++)
		{
			for (int j = 0; j < A2D1.getColumn(); j++)
			{

				cout << "Array A2D1 [" << i << "][" << j << "] = " << A2D1[i][j] << endl;
			}

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

void testOutOfBounds()
{

	cout << endl;
	cout << "______________________________________" << endl;
	cout << "inside test out of bounds exceptions " << endl;
	cout << "______________________________________" << endl;
	try {

		cout << endl;
		cout << "testing accessing a negative row value " << endl;
		Array2D<int> A2D1(2, 3);

		A2D1[-1][3] = 5;

	}

	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}	
	try {

		cout << endl;
		cout << "testing accessing a bigger row value " << endl;
		Array2D<int> A2D1(2, 3);

		A2D1[10][3] = 5;

	}

	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}

	try {
		cout << endl;
		cout << "testing accessing a bigger row value " << endl;
		Array2D<int> A2D1(2, 3);

		A2D1[1][20] = 5;

	}

	catch (Exception& e)
	{
		cout << e.getMessage() << endl;
	}

	try {
		cout << endl;
		cout << "testing accessing a bigger row value " << endl;
		Array2D<int> A2D1(2, 3);

		A2D1[1][-1] = 5;

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





int main()
{

	testfunctionality();
	testOpertorEquals();
	testCopyConstructor();
	testSetRow();
	testSetColumn();
	testConstness();
	testOutOfBounds();


	return 0; 
}