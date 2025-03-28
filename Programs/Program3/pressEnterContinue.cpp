/*
	Title: pressEnterContinue.cpp
	Author: April Crockett
	Date: 3/4/2025
	Purpose: To show you all how you can have the user press enter to continue in your program.
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "\n\nHI\n\n";
	cout << "Press ENTER to continue.\n";
	cin.get();  //get is a function that will retrieve ONE character from the keyboard
	cout << "\n\nGOOD BYE\n\n";
	
	return 0;
}