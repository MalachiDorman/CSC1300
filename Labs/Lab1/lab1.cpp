// me: Malachi Dorman
//Asignment Lab: 1
//Date: 1/30/2025
//Last Modified: 1/30/2025

#include <iostream>
using namespace std;

int main ()
{
    // variables

    double celsius;
    double fahrenheit;

    // Print and ask for user input

    cout << "What is the temperature in celsius? ";

    cin >> celsius;

    // Convert celsius to fahrenheit

    fahrenheit = celsius * (9.0/5.0) + 32;
    cout << endl;

    // Print out final statement

    cout << "Result: " << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
    
    return 0;
}
