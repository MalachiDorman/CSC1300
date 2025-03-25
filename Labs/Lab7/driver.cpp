/*
    Author: Malachi Dorman
    Date: 3/20/2025
    File Name: change to clue.cpp
    Purpose: Main clue game
*/

#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include "clue.h"

using namespace std;

int main() {
    srand(time(0)); // Random number generator

    // Generate random correct suspect, room, and weapon 
    int correctSuspect = rand() % 3 + 1;
    int correctRoom = rand() % 3 + 1;
    int correctWeapon = rand() % 3 + 1;

    // Track inspected rooms and interviewed suspect
    bool room1 = false, room2 = false, room3 = false;
    bool sus1 = false, sus2 = false, sus3 = false;

    // Print game title
    printTitle();

    bool gameOver = false;
    while (!gameOver) {
        int choice = printMenu(); // Get user choice

        if (choice == 1) { // Explore rooms
            if (inspectRooms(room1, room2, room3)) { // If new room explored
                cout << "\nHint: " << hint(correctWeapon, correctRoom) << endl;
            }
        } 
        else if (choice == 2) { // Interview suspects
            interviewSuspects(sus1, sus2, sus3, correctSuspect);
        } 
        else if (choice == 3) { // Make a guess
            if (getGuess(correctSuspect, correctRoom, correctWeapon)) {
                gameOver = true; // End game if correct
            }
        } 
        else if (choice == 4) { // Quit
            cout << "\nYou surrender all case materials... The mystery remains unsolved.\n";
            gameOver = true;
        }
    }

    return 0;
}
