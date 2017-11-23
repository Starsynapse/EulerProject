/*
Eduardo Zamora
*/

#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	int choose;

	cout << "Choose number (1-4)" << endl;
	cin >> choose;

	if (choose == 1)
	{
		cout << "Problem 1" << endl;
		problem1();
	}

	else if (choose == 2)
	{
		cout << "Problem 2" << endl;
		problem2();
	}

	else if (choose == 3)
	{
		cout << "Problem 3" << endl;
		problem3();
	}

	else if (choose == 4)
	{
		cout << "Problem 4" << endl;
		problem4();
	}

	system("pause");
	return 0;
}