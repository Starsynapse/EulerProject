#include "Header.h"

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int square(int number, int power)
{
	int answer = 1;
	for (int i = 0; i <= power; i++)
	{
		answer = answer * number;
	}
	return answer;
}

int taking_the_square(int number, int power)
{
	int answer = 1;
	for (int i = 0; i < power; i++)
	{
		answer = answer * number;
	}
	return answer;
}

void problem5()
{
	int factors = 20;
	int temp_factors = factors;
	int numbers = 0;
	int total = 1;
	int two = 0;
	int three = 0;
	int five = 0;
	int seven = 0;
	int eleven = 0;
	int thirteen = 0;
	int seventeen = 0;
	int nineteen = 0;

	while (factors > square(2, two))
	{
		two++;
	}
	total = total * taking_the_square(2, two);

	while (factors > square(3, three))
	{
		three++;
	}
	total = total * taking_the_square(3, three);


	while (factors > square(5, five))
	{
		five++;
	}
	total = total * taking_the_square(5, five);

	while (factors > square(7, seven))
	{
		seven++;
	}
	total = total * taking_the_square(7, seven);

	while (factors > square(11, eleven))
	{
		eleven++;
	}
	total = total * taking_the_square(11, eleven);

	while(factors > square(13, thirteen))
	{
		thirteen++;
	}
	total = total * taking_the_square(13, thirteen);

	while (factors > square(17, seventeen))
	{
		seventeen++;
	}
	total = total * taking_the_square(17, seventeen);

	while (factors > square(19, nineteen))
	{
		nineteen++;
	}
	total = total * taking_the_square(19, nineteen);

	cout << "Two: " << two << endl;
	cout << "Three: " << three << endl;
	cout << "Five: " << five << endl;
	cout << "Seven: " << seven << endl;
	cout << "Eleven: " << eleven << endl;
	cout << "Thirteen: " << thirteen << endl;

	cout << "Total: " << total << endl;
}
