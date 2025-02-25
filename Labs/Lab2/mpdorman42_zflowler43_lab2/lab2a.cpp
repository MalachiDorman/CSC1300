/**************************************************
* Name: Malachi Dorman and Zavier Fowler          *
* Class: CSC 1300-002                             *
* Assignment: Lab 2a                               *
* Date: 2/06/2025                                 *
* Last Modified: 2/06/2025                        *
***************************************************/

#include <iostream>
using namespace std;

int main() {
    // defining variables
    int birthday;
    string random_word;
    double agent_number;
    char letter;

    // title
    cout << "Welcome to the VSA (Very Secret Agency).\n";
    cout << "In order for your identity to remain secret, we need to come up with your agent name\n";

    // take in the inputs
    cout << "What is the first letter of your first name? ";
    cin >> letter;  
    
    cout << "What is your birthday in the format MMDD (ex June 08 is 0608): ";
    cin >> birthday;
    cin.ignore();
    cout << "What word are you thinking right now: ";
    getline(cin, random_word);
    

    // calculate the agent number
    agent_number = ((birthday / letter) * 100 + (letter % 10));

    // output the final result
    cout << "Your new spy name is now " << random_word << " " << agent_number;

    return 0;
}