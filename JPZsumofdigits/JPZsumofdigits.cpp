// JPZsumofdigits.cpp : Defines the entry point for the console application.
// Joshua Paz; a program that takes a whole integer and adds the digits for a sum

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//variables
	int userint = 0;
	int intholder = 0;
	int sum = 0;

	//prompt for user to enter an integer
	cout << "Please enter an integer: ";
	cin >> userint;
	cout << endl;
	
	//storage for the integer
	intholder = userint;

	//create loop to run equation
	while (userint > 0) {
		intholder = userint % 10;
		cout << "Digit:"  << intholder << endl;
		sum += intholder;
		userint /= 10;
	}

	cout << "" << endl;
	cout << "The sum of the digits is: " << sum << endl; // output the sum

	return 0;
}

