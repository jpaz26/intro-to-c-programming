// JPZconversions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#define M 1.609

using namespace std;


int main()
{
	float miles;
	cout <<"Enter Distance in Miles"<< endl;
	cin >> miles;
	int kilometers;
	cout << "Distance in Kilometers" << endl;
	kilometers = miles * M;
	cout << kilometers;
	cout << "" << endl;
    return 0;
}

