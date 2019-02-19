// JPZloosechange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <math.h>


int main()
{
	//create varibales for the coins
	int halfdollars = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	
	//creat an input for user use and output display prompting the user to enter amount of coins
	cout << "Enter the number of half-dollars: ";
	cin >> halfdollars;
	cout << endl;

	cout << "Enter the number of quarters: ";
	cin >> quarters;
	cout << endl;

	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << endl;

	cout << "Enter the number of nickels: ";
	cin >> nickels;
	cout << endl;

	cout << "Enter the number of pennies: " ;
	cin >> pennies;
	cout << endl;

	//create equations with the values to multiply by the amount of each coin type
	double h = halfdollars * 0.50;
	double q = quarters * 0.25;
	double d = dimes * 0.10;
	double n = nickels * 0.05;
	double p = pennies * 0.01;
	double t;

	//equation to add the coin amounts from previous equation
	t = h + q + d + n + p;

	//output the total amount of change
	cout << "Total amount is: " << t << endl;
	
    return 0;
}