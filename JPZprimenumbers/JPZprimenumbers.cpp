// JPZprimenumbers.cpp :
//Joshua Paz; this program is made to find all prime numbers between 1-10000
//intro to c++ programming

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//variables for loop
	int num = 0;
	int check = 0;

	//for loop with expression to determine prime numbers
	for(num = 2; num <= 10000; num++) 
	{
		for (check = 2; check <= num; check++)
		{
			//if statement to stop program if remainder equals zero
			if (num % check == 0)
				break;
			
			//else if to print out prime numbers
			else if (num == check + 1)
				cout << num << " ";
		}


	}
    return 0;
}

