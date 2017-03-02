
#include "stdafx.h"

char menu::difficultyChoice()
{
	char chosen;

	cout << "Menu: " << endl << endl;
	cout << "Choose Level of difficulty " << endl;
	cout << "---------------------------" << endl;
	cout << "Beginner (Press b)" << endl;
	cout << "Intermediate (Press i)" << endl;
	cout << "Expert (Press e)" << endl;

	cin >> chosen;

	return chosen;
}
