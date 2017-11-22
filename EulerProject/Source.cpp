/*
Eduardo Zamora
*/

#include "Header.h"
#include <iostream>
using namespace std;

int main()
{
	int choose;

	cout << "Choose number (1-2)" << endl;
	cin >> choose;

	if (choose == 1)
	{
		cout << "Selcted problem 1." << endl;
		problem1();
	}

	if (choose == 2)
	{
		cout << "Selected problem 2." << endl;
		problem2();
	}

	system("pause");
	return 0;
}