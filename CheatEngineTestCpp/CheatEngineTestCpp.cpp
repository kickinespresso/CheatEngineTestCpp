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
	int counter = 0;
	int countByFives = 0; 
	mystr = "";
	while (mystr != "e") {
		cout << "Counter: " << counter << endl;
		cout << "Count by Fives: " << countByFives << endl;
		cout << "What's next? ";
		getline(cin, mystr);
		counter++;
		countByFives += 5;
	}
    return 0;
}

