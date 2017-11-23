#include "Header.h"

#include <iostream>
#include <string>
#include <sstream>
using namespace std;



void problem4()
{
	int first = 100;//
	int second = 100;//
	int total = 0;
	string reverse_number;
	int palindrome = 0;
	int first_product;
	int second_product;

	while (first <= 1000 && second <= 1000)//
	{
		int digit = 0, number = 0, reverse = 0;
		stringstream ss; 
		ss.str("");
		
		total = first* second;
		number = total;

		do
		{
			digit = number % 10;
			reverse = (reverse * 10) + digit;
			number = number / 10;

			if (reverse == 0)
			{
				ss << reverse;
			}
		} while (number != 0);

		ss << reverse;
		ss >> reverse_number;

		if (total == stoi(reverse_number) && total > palindrome)
		{
			palindrome = total;
			first_product = first;
			second_product = second;
			first++;
		}

		else if (first == 1000)//
		{
			first = 100;//
			second++;
		}

		else
		{
			first++;
		}
	}

	cout << "Palindrome: " << palindrome << endl;
	cout << "First: " << first_product << " Second: " << second_product << endl;
}