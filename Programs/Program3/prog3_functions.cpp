/******************************************                        
* Purpose: should contain the function    *
* definitions of all functions other      *
* than the main function                  *
*                                         *
******************************************/

// TO DO: MAKE IT WHERE IT DOESNT ROLL DIE IMMEDIATLY FIRST TIME

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "prog3.h"

using namespace std;



const int maxBoardSpace = 25;
int random = 0;
string good = "good.txt";
string bad = "bad.txt";
double moneyGen = 0.0;

double money[] = {0.0};

// Get player names
void getPlayersNames(string names[], int numPlayers) {
    
    

    for (int i = 0; i < numPlayers; i++) {
        cout << "What is your name, pirate " << i + 1 << "?: ";
        cin >> names[i];
    }
}


int rollDice(string names[], int numPlayers, int boardSpace[]) {
    int i = 0 ;
    bool progress  = true; // Variable for the if loop to check if max board space hits
    do {
    for(int i = 0; i < numPlayers; i++) { // Loop through all players
   
   cout << names[i] << ", press ENTER to roll the die.\n";
    cin.get(); // ENTER key press
    
    int dieRoll = rand() % 6 + 1; // Random number 1-6

    boardSpace[i] += dieRoll;  // Update the player's space on the board
  

    // Display dice face
    switch(dieRoll) {
        case 1:
            cout << " _________\n";
            cout << "|         |\n";
            cout << "|    o    |\n";
            cout << "|         |\n";
            cout << "|_________|\n\n";
            break;
        case 2:
            cout << " _________\n";
            cout << "|         |\n";
            cout << "|  o      |\n";
            cout << "|      o  |\n";
            cout << "|_________|\n\n";
            break;
        case 3:
            cout << " _________\n";
            cout << "| o       |\n";
            cout << "|    o    |\n";
            cout << "|       o |\n";
            cout << "|_________|\n\n";
            break;
        case 4:
            cout << " _________\n";
            cout << "| o     o |\n";
            cout << "|         |\n";
            cout << "| o     o |\n";
            cout << "|_________|\n\n";
            break;
        case 5:
            cout << " _________\n";
            cout << "| o     o |\n";
            cout << "|    o    |\n";
            cout << "| o     o |\n";
            cout << "|_________|\n\n";
            break;
        case 6:
            cout << " _________\n";
            cout << "| o     o |\n";
            cout << "| o     o |\n";
            cout << "| o     o |\n";
            cout << "|_________|\n\n";
            break;
    }

    cout << names[i] << " ROLLED A " << dieRoll << "!\n\n";
    cout << names[i] << " MOVED TO SPACE " << boardSpace[i] << "\n\n";

    
    activateActionOnSpace(names,boardSpace, money, numPlayers);
    
    if (maxBoardSpace <= boardSpace[i]){
        progress = false;
        break;
    }

   }
    }while(progress == true);
return 0;
}



void playerFinishedBoard(string names[], int boardSpace[], double money[], int numPlayers){
    int highestSpace = -1;
    string highestPlayer;
    double highestMoney;
    string richestPlayer;
    for(int i = 0; i < numPlayers - 1; i++){
        if(boardSpace[i]> highestSpace){
            highestSpace = boardSpace[i];
            highestPlayer = names[i];
        }

        if(money[i] > highestMoney){
            highestMoney = money[i];
            richestPlayer = names[i];
        }

        if(maxBoardSpace <= boardSpace[i]){
            cout << "\nYOU MADE IT TO THE GRAND LINE!\n\n";
            cout << "THE PIRATE WHO REACHED THE HIGHEST SPACE IS " << highestPlayer << "\n\n";
            cout << "THE RICHEST PIRATE IS" << richestPlayer << "\n\n";
            
            

        } 

        break;
    }


}
void activateActionOnSpace(string names[], int boardSpace[], double money[], int numPlayers) {
    
   
    
    for (int i = 0; i < numPlayers; i++) { // Loop through all players

        int goodBad = rand() % 2 + 1; // Random number 1-2 for good/bad actions

        srand(time(0));
        random = rand() % 20; // Random number for action selection
        moneyGen = rand() % 100000 + 1; // Random money gen

        if (goodBad == 1) {
            ifstream inFile(good); // Open good.txt
            string line;
            int lineNum = 0;

            if (inFile.is_open()) {
                printSmiley();
                cout << "GREAT! ";

                while (getline(inFile, line)) {
                    if (lineNum == random) {
                        break;  // Stop at the random line
                    }
                    lineNum++; // Increments to random line
                }
                getline(inFile, line);
                cout << line << endl;

            // Add Money
            money[i] += moneyGen;
            cout << "ADDED " << moneyGen << " TO YOUR ACCOUNT!" << endl;
            cout << "YOU NOW HAVE " << money[i] << " IN YOUR ACCOUNT!" << endl;

            } break;

            

        } else if (goodBad == 2) {
            ifstream inFile(bad); // Open bad.txt
            string line;
            int lineNum = 0;

            if (inFile.is_open()) {
                printFrown();
                cout << "OH NO! ";

                while (getline(inFile, line)) {
                    if (lineNum == random) {
                        break;  // Stop at the random line
                    }
                    lineNum++; // Increments to random line
                }
                getline(inFile, line);
                cout << line << endl;

            // Subract Money
            money[i] -= moneyGen;
            cout << "SUBTRACTED " << moneyGen << " FROM YOUR ACCOUNT!" << endl;
            cout << "YOU NOW HAVE " << money[i] << " IN YOUR ACCOUNT!" << endl;

            } break;

            
        }
    }
}

void printSmiley(){

    cout << "       _.-'''''-._      " << endl;
    cout << "    .'  _     _  '.    " << endl;
    cout << "   /   (_)   (_)   \\   " << endl;
    cout << "  |  ,           ,  |  " << endl;
    cout << "  |  \\`.       .`/  |  " << endl;
    cout << "   \\  '.`'\"\"'\"`.'  /   " << endl;
    cout << "    '.  `'---'`  .'    " << endl;
    cout << "      '-._____.-'      " << endl;
    cout << "\n\n";
}
void printFrown(){
    cout << "         XXXXXXXXXXX         " << endl;
    cout << "      XXX           XXX      " << endl;
    cout << "    XX                 XX    " << endl;
    cout << "  XX                     XX  " << endl;
    cout << " X      XXX    X X X       X " << endl;
    cout << " X   XXX          XXXX     X " << endl;
    cout << "X                           X" << endl;
    cout << "X                           X" << endl;
    cout << "X                           X" << endl;
    cout << " X        XXXXXXX          X " << endl;
    cout << " X      XXX     XXX        X " << endl;
    cout << "  XX    X         X      XX  " << endl;
    cout << "    XX                 XX    " << endl;
    cout << "      XXX           XXX      " << endl;
    cout << "         XXXXXXXXXXX         " << endl;
    cout << "\n\n";

}