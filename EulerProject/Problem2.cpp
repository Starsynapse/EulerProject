#include "Header.h"

#include <iostream>
using namespace std;

int recursion(int value, int total, int one, int two)
{
	if (value > 4000000)
	{
		return total;
	}

	else
	{
		value = one + two;
		if (value % 2 == 0)
		{
			cout << "Value: " << value << endl;
			total = total + value;
		}

		int *p1, *p2;
		p1 = &one;
		p2 = &two;
		*p1 = two;
		*p2 = value;

		recursion(value, total, one, two);
	}
}

void problem2()
{
	int one = 1;
	int two = 1;
	int total = 0;
	int value = 0;

	total = recursion(value, total, one, two);
	cout << "Total: " << total << endl;
}