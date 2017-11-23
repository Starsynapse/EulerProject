#include "Header.h"

#include <iostream>
using namespace std;

void problem3()
{
	int iterator = 2;
	unsigned long long int prime = 600851475143;

	while (iterator <= prime)
	{
		//cout << "iterator: " << iterator << endl;
		if (prime % iterator == 0)
		{
			cout << "prime factor: " << iterator << endl;
			if (prime / iterator != 1)
			{
				prime = prime / iterator;
			}
		}

		iterator++;
	}
	cout << "largest prime factor: " << prime << endl;
}