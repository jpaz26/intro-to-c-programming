#pragma once
#include <string>
#include <iostream>
class JPZRomanNumerals
{
/*public:
	JPZRomanNumerals();
	~JPZRomanNumerals();*/

	string roman;
	
public:
	
	void setter(string rom)
	{
		rom = roman;
	}

	void getter()
	{
		cout << roman;
	}


	int dec(char ch)
	{
		switch (ch)
		{
		case 'M':
		case 'm':
			return 1000;

		case 'D':
		case 'd':
			return 500;

		case 'C':
		case 'c':
			return 100;

		case 'L':
		case 'l':
			return 50;

		case 'X':
		case 'x':
			return 10;

		case 'V':
		case 'v':
			return 5;

		case 'I':
		case 'i':
			return 1;
		}
	}

	int getDecimal()
	{
		long int decimal = 0;
		int i = 0;
		int	temp1 = 0;
		int	temp2 = 0;

		for (i = 0; roman[i] != '\0'; i++)
		{
			temp1 = dec(roman[i]);
			temp2 = dec(roman[i + 1]);

			if (temp1 >= temp2)
			{
				decimal += temp1;
			}
			else
			{
				decimal -= temp1;
			}
		}

		return decimal;
	}

};

