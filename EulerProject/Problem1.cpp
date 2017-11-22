#include "Header.h"

#include <iostream>
using namespace std;

void problem1()
{
	int iterator = 1;
	int value_1 = 0;
	int value_2 = 0;
	int value_3 = 0;
	int total = 0;
	
	while (value_1 < 1000 || value_2 < 1000 || value_3 < 1000)
	{
		value_1 = 5 * iterator;
		if (value_1 < 1000)
		{
			total = total + value_1;
			cout << "value_1: " << value_1 << endl;
			cout << "iterator: " << iterator << endl;
		}

		value_2 = 3 * iterator;
		if (value_2 < 1000)
		{
			total = total + value_2;
			cout << "value_2: " << value_2 << endl;
			cout << "iterator: " << iterator << endl;
		}
		
		value_3 = (3 * 5) * iterator;
		if (value_3 < 1000)
		{
			total = total - value_3;
			cout << "value_3: " << value_3 << endl;
			cout << "iterator: " << iterator << endl;
		}

		iterator++;
	}

	cout << "total: " << total << endl;
}