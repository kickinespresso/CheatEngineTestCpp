// CheatEngineTestCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	printf("Hello World!\n");
	system("PAUSE");

	string mystr;
	mystr = "";

	//Basic Integers
	int counter = 0;
	int countByFives = 0;

	//Pointers
	int *pc, c;
	c = 5;
	pc = &c;   

	while (mystr != "e") {

		//Increment
		counter++;
		countByFives += 5;
		c++;

		//Display values via console
		cout << "Counter: " << counter << endl;
		cout << "Count by Fives: " << countByFives << endl;
		cout << "Address of c (&c): " << &c << endl;
		cout << "Value of c (c): " << c << endl << endl;

		cout << "What's next? ";
		getline(cin, mystr);

	}
    return 0;
}

