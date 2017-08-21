// CheatEngineTestCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

void myFunction(string myString) {
	cout << "MyFunction Print: " << myString << endl;
}

int add(int x, int y) {
	return x + y;
}



int main()
{

	printf("Hello World!\n");
	system("PAUSE");

	string mystr;
	mystr = "";
	Vehicle *myVehicle;
	//Basic Integers
	int counter = 0;
	int countByFives = 0;

	//Pointers
	int *pc, c;
	c = 5;
	pc = &c;   

	//Create a new class
	myVehicle = new Vehicle();

	while (mystr != "e") {

		if (mystr == "p") {
			myFunction("print this");
		}

		if (mystr == "i") {
			c = add(c, 10);
		}

		if (mystr == "v") {
			myVehicle->IncrementWheels();
		}

		//Increment
		counter++;
		countByFives += 5;
		c++;

		//Display values via console
		cout << "Counter: " << counter << endl;
		cout << "Count by Fives: " << countByFives << endl;
		cout << "Address of c (&c): " << &c << endl;
		cout << "Value of c (c): " << c  << endl;
		cout << "Value of vehicle wheels: " << myVehicle->GetWheels() << endl << endl;

		cout << "What's next? ";
		getline(cin, mystr);

	}
    return 0;
}

