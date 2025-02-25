/*****************************************************************
* Name: Zavier Fowler and Malachi Dorman                         *
* Class: CSC 1300-002                                            *
* Assignment: Lab3b                                              *
* Date: 2/06/2025                                                *
* Last Modified: 2/12/2025                                       *
*Purpose: Generate a letter tell usef if they are correct or not *
*****************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char abc;
    char randChar;
    int switchRandom;
   
    cout << "Guess the letter (A-Z): "; // Question
    cin >> abc;

    srand(time(0));// Randmom number genterator

    switchRandom = rand() % 25;
    
    switch(switchRandom){
        case 0: randChar= 'A';
            break; 
        case 1: randChar ='B';
            break;
        case 2 : randChar = 'C';
            break;
        case 3 : randChar =  'D';
            break;
        case 4: randChar = 'E';
            break;
        case 5: randChar = 'F';
            break;
        case 6: randChar =  'G';
            break;
        case 7: randChar = 'H';
            break;
        case 8: randChar =  'I';
            break;
        case 9: randChar =  'J';
            break;
        case 10: randChar ='K';
            break;
        case 11: randChar =  'L';
            break;
        case 12: randChar = 'M';
            break;
        case 13: randChar = 'N';
            break;
        case 14: randChar ='O';
            break;
        case 15:randChar = 'P';
            break;
        case 16: randChar =  'Q';
            break;
        case 17: randChar =  'R';
            break;
        case 18: randChar = 'S'; 
            break;
        case 19: randChar = 'T';
            break;
        case 20: randChar =  'U'; 
            break;
        case 21: randChar =  'V';
            break;
        case 22: randChar = 'W';
            break;
        case 23: randChar = 'X';
            break;
        case 24: randChar =  'Y';
            break;
        case 25: randChar = 'Z';
            break;
        
    }

    //This if then statement should connvert the user response to a response the sytem can unerstand

    switch(abc){
        case 'a': abc = 'A';
            break; 
        case 'b': abc ='B';
            break;
        case 'c' : abc = 'C';
            break;
        case 'd' : abc =  'D';
            break;
        case 'e': abc = 'E';
            break;
        case 'f': abc = 'F';
            break;
        case 'g': abc =  'G';
            break;
        case 'h': abc = 'H';
            break;
        case 'i': abc =  'I';
            break;
        case 'j': abc =  'J';
            break;
        case 'k': abc ='K';
            break;
        case 'l': abc =  'L';
            break;
        case 'm': abc = 'M';
            break;
        case 'n': abc = 'N';
            break;
        case 'o': abc ='O';
            break;
        case 'p': abc = 'P';
            break;
        case 'q': abc =  'Q';
            break;
        case 'r': abc =  'R';
            break;
        case 's': abc = 'S'; 
            break;
        case 't': abc = 'T';
            break;
        case 'u': abc =  'U'; 
            break;
        case 'v': abc =  'V';
            break;
        case 'w': abc = 'W';
            break;
        case 'x': abc = 'X';
            break;
        case 'y': abc =  'Y';
            break;
        case 'z': abc = 'Z';
            break;
        
    }


    if (abc == randChar)
        cout << "Congratulations! You guessed the correct letter:" << randChar <<endl;

    else{
        cout << "You did your best. Nice effort!" << endl;
        cout << "The correct answer was:" << randChar;
    }


}