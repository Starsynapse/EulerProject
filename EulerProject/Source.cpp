/*
Eduardo Zamora
*/

#include "Header.h"


int main()
{
	int choose;

	cout << "Choose number (1-1)" << endl;
	cin >> choose;

	if (choose == 1)
	{
		cout << "Selcted problem 1." << endl;
		problem1();
	}

	system("pause");
	return 0;
}