/*
    Author: Malachi Dorman
    Date: 3/20/2025
    File Name: change to clue.cpp
    Purpose: Clue game functions
*/
#include <iostream>
#include <fstream>
using namespace std;

/*
    Function name: hint()
    @param: int weapon: the correct weapon
            int room: the correct room
    return: string

    This function will take in the correct number and weapon and use those to go through the hints.txt file
        and grab a random hint until one uses either the correct room or correct weapon. The hint string is 
        then returned.
*/
// TODO: add your hint function here
string hint(int weapon, int room) {
    ifstream file("hints.txt");
    if (!file) {
        return "";
    }

    string line, category, hintText;
    while (getline(file, line)) {
        size_t delimiter = line.find('|');
        if (delimiter == string::npos) {
            continue;  // Skip invalid lines
        }

        category = line.substr(0, delimiter);  // Extract category (room/weapon)
        hintText = line.substr(delimiter + 1); // Extract actual hint

        // Convert room number to its corresponding string
        string correctRoom;
        if (room == 1) correctRoom = "Clement";
        else if (room == 2) correctRoom = "Bruner";
        else if (room == 3) correctRoom = "AIEB";

        // Convert weapon number to its corresponding string
        string correctWeapon;
        if (weapon == 1) correctWeapon = "Computer charger";
        else if (weapon == 2) correctWeapon = "Textbook";
        else if (weapon == 3) correctWeapon = "Java Code";

        // Check if the category matches the correct room or weapon
        if (category == correctRoom || category == correctWeapon) {
            file.close();
            return hintText;  // Return the first matching hint
        }
    }

    file.close();
    return "No hints available.";
}

/*
    Function name: getGuess()
    @param: int suspect: the correct suspect
            int room: the correct room
            int weapon: the correct weapon
    return: bool

    This function will take in the user's guess for suspect, room, and weapon and return true if they got all 3 correct
        and false otherwise.
*/
// TODO: add your guess function here
bool getGuess(int correctSuspect, int correctRoom, int correctWeapon) {
    int suspectGuess, roomGuess, weaponGuess;

    // Get the suspect guess
    cout << "\nOn that fateful day, you believe\n";
    cout << "1. April Crockett\n2. Brandon Vandergriff\n3. A Kshitiz\n";
    cout << "Who knocked out Awesome Eagle? Enter 1, 2, or 3: ";
    cin >> suspectGuess;

    while (suspectGuess < 1 || suspectGuess > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> suspectGuess;
    }

    // Get the room guess
    cout << "\nYou think the suspect followed Awesome Eagle into\n";
    cout << "1. The tutoring lounge (CLEM 402)\n";
    cout << "2. The classroom (BRUN 228)\n";
    cout << "3. The lab room (AIEB 256)\n";
    cout << "Enter 1, 2, or 3: ";
    cin >> roomGuess;

    while (roomGuess < 1 || roomGuess > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> roomGuess;
    }

    // Get the weapon guess
    cout << "\nThe suspect used a\n";
    cout << "1. Computer charger\n";
    cout << "2. Textbook\n";
    cout << "3. The scariest thing known to man (Java Code)\n";
    cout << "to knock Awesome Eagle out. Enter 1, 2, or 3: ";
    cin >> weaponGuess;

    while (weaponGuess < 1 || weaponGuess > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> weaponGuess;
    }

    // Check if the guess is correct
    if (suspectGuess == correctSuspect && roomGuess == correctRoom && weaponGuess == correctWeapon) {
        cout << "\nCorrect! The criminal will be put away for good.\n";
        return true;
    } else {
        cout << "\nMaybe you should have investigated more...\n";
        cout << "The correct suspect was: " << correctSuspect << "\n";
        cout << "The correct weapon was: " << correctWeapon << "\n";
        cout << "The correct room was: " << correctRoom << "\n";
        return false;
    }
}


/*
    Function name: inspectRooms()
    @param: bool& room1: true if the user has inspected the tutoring lounge
            bool& room2: true if the user has inspected the classroom
            bool& room3: true if the user has inspected the lab
    return: bool

    This function should allow the user to inspect one of the rooms. It should return true if they inspected a new room and 
        return false if they inspected a room they've already been to. The function should update the booleans showing which
        rooms have been inspected.
*/
// TODO: add your explore function here

bool inspectRooms(bool& room1, bool& room2, bool& room3){
    int choice;
    cout << "\nWhich room would you like to inspect?\n";
    cout << "1. The tutoring lounge (CLEM 402)\n";
    cout << "2. The classroom (BRUN 228)\n";
    cout << "3. The lab room (AIEB 256)\n";
    cout << "Enter 1, 2, or 3: ";
    cin >> choice;

    // Invalid Choice
    while (choice < 1 || choice > 3) {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> choice;
    }

    // Choice for room
    if (choice == 1 && !room1) {
        room1 = true;
        return true;
    } else if (choice == 2 && !room2) {
        room2 = true;
        return true;
    } else if (choice == 3 && !room3) {
        room3 = true;
        return true;
    } else {
        cout << "\nYou have already inspected this room.\n";
        return false;
    }
}

/*
    Function name: interviewSuspects()
    @param: bool& sus1: true if suspect 1 has been interviewed
            bool& sus2: true if suspect 2 has been interviewed
            bool& sus3: true if suspect 3 has been interviewed
            int suspect: the integer holding the correct suspect
    return: void

    Allows the user to choose a suspect to interview and, if they haven't been interviewed,
        gives a hint as to who the real suspect is (either a suspicious hint if they are the suspect, 
        or a hint to look at the other suspects if it is not them). You can be as simple as "It wasn't them"
        or "That was a very suspicious interview."
        If they have interviewed all the suspects, the program should give a final hint.
        These hints are hardcoded and NOT pulled from hints.txt
*/
// TODO: add your suspect function here

void interviewSuspects(bool& sus1, bool& sus2, bool& sus3, int suspect) {
    int choice;
    cout << "\nWhich suspect would you like to interview?\n";
    cout << "1. April Crockett\n";
    cout << "2. Brandon Vandergriff\n";
    cout << "3. A Kshitiz\n";
    cout << "Enter 1, 2, or 3: ";
    cin >> choice;

    // Invalid Choice
    while (choice == 1 || choice > 3){
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> choice;
    }
    // Option if you have already interviewed
    if ((choice == 1 && sus1) || (choice == 2 && sus2) || (choice == 3 && sus3)) {
        cout << "\nYou have already interviewed this suspect.\n";
        return;
    }

    // Choice for suspect
    if (choice == 1){
        sus1 = true;
    } else if (choice == 2){
        sus2 = true;
    } else if (choice == 3){
        sus3 = true;
    }

    // If choice is suspect
    if (choice == suspect) {
        cout << "\nThat was a very suspicious interview...\n";
    } else {
        cout << "\nThey claim to have nothing to do with the crime.\n";
    }

    if (sus1 && sus2 && sus3) {
        cout << "\nYou've interviewed everyone. A final thought... ";
        cout << "The real suspect seemed nervous when questioned.\n";
    }
}
/*
    Function name: printMenu()
    @params: none
    return: int
    
    This function prints out the menu of choices, takes in the user choice, validates it, 
        and returns the choice the user made
    DO NOT CHANGE THIS FUNCTION
*/
int printMenu() {
    int choice;

    cout << "\n\nAs per detective procedure, you may do one of the following: ";
    cout << "\n1. Explore\n2. Interview Suspects\n3. Make an educated guess\n4. Quit";
    cout << "\nWhich do you do? ";
    cin >> choice;

    // Invalid Option
    while (choice < 1 || choice > 4) {
        cout << "That isn't procedure. Please choose 1, 2, or 3: ";
        cin >> choice;
    }

    return choice;
}

/*
    Function name: printTitle()
    @params: none
    return: void

    This function prints the title of the program
    DO NOT CHANGE THIS FUNCTION
*/
void printTitle() {  
    cout << "\n   ___ _          _    ___ ___   ___    _   ";
    cout << "\n   / __| |_  _ ___| |  / __/ __| | __|__| |  ";
    cout << "\n  | (__| | || / -_)_| | (__\\__ \\ | _|/ _` |_ ";
    cout << "\n   \\___|_|\\_,_\\___(_)  \\___|___/ |___\\__,_(_)";                                             
    cout << "\nChief Dr Gannod, the head of the CS Department investigative team has come to you...a crime has been committed.";
    cout << "\nAwesome Eagle, the cool TTU mascot, was found unconcious in the CS office.";
    cout << "\nAs a detective, it is your job to answer 3 questions:\n\tWho?\n\tWhat?\n\tWhere?";
    cout << "\nInvestigate rooms to get clues as to where and what. Interview the suspects to find out who.";
    cout << "\nAt the end, make your guess and see if you were right!";
    cout << "\n***************************************************************************************************************\n";
}