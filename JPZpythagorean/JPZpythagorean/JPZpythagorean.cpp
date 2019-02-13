// JPZpythagorean.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include <math.h>
#include <iostream>


int main()
{
	// create variables for a,b, and c
	double a;
	double b;
	double c;
	//print out text prompting user input for variables
	cout << "Enter a and b" << endl;
	//input code for a and b
	cin >> a >> b;
	// pythagorean equation
	c = a*a + b*b;
	c = sqrt(c);
	//print out solution
	cout << "c =" << " " << c << endl;


    return 0;
}

