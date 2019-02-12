// JPZconversions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#define M 1.609

using namespace std;


int main()
{
	// create variable for miles
	float miles;
	// print out text for user to input distance
	cout <<"Enter Distance in Miles"<< endl;
	// create the input for miles
	cin >> miles;
	// declare kilometers as a variable
	int kilometers;
	// print out the text for the conversion
	cout << "Distance in Kilometers" << endl;
	// the conversion expression
	kilometers = miles * M;
	// output the converted distance
	cout << kilometers;
	// empty space holder
	cout << "" << endl;
    return 0;
}

