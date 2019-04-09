// JPZprinttree.cpp :
//Joshua  Paz: this program is written to call a fucntion to run the algorithm written to print out a typed in number of * in the shape of a tree.

#include "stdafx.h"
#include <iostream>
using namespace std;

void printTree(int treeHeight) {

	//this algorithm will take the user input for the tree height and print it out in accordance.
	int treeWidth = 1;

	for (int treeRow = 1; treeRow < treeHeight; treeRow++) {

		for (int spaces = 1; spaces <= treeHeight - treeRow; spaces++) {

			cout << " ";
		}
			for (int treeColumn = 1; treeColumn <= treeWidth; treeColumn++)
		{
			cout << "*";
		}

		treeWidth += 2;

		cout << endl;

	}
	
	//this will print out the * that makes up the trunk
	for (int spaces = 1; spaces < treeHeight; spaces++) {

		cout << " ";
	}

	cout << "*" << endl;

}



int main()

{
	//this variable is the height for the tree.
	int userTreeHeight = 0;

	//this do while loop will always ask for the tree height until the user types 0
	do 
	{
		//this prompts the user to enter the tree height
		cout << "Enter the height of the tree: ";
		cin >> userTreeHeight;

		//this calls back the function to run the userTreeHeight variable through
		printTree(userTreeHeight);

	//this ends the loop
	} while (userTreeHeight != 0);


	return 0;
} 

