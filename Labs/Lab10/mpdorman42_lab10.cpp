/******************************************************************************

	Title:			Lab 10
	Author: 		Malachi Dorman
	Date Created: 	4/10/2025
	Last Updated: 	
	Purpose: 		A virtual pet game that utilizes pointers

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;



// Variables

string _petName;
int _petAge;
int _petHunger;

int selection;

// Pointer variables

string *petName = &_petName;
int *petAge = &_petAge;
int *petHunger = &_petHunger;

// Function declaration

void changePetName(string *petName);
void feedPet(int *petHunger, string *petName);
int playWithPet(int *petHunger, string *petName);
void petBirthday(int *petAge);
void showPetStats(string *petName, int *petAge, int *petHunger);
void showMenu();
bool playing = true;

// Main function
int main(){
do{
	cout << "******** VIRTUAL PET GAME ********\n\n";
	cout << "Please enter the following information about your pet:\n";
	cout << "Name: ";
	cin >> *petName;

	do{

	cout << "Age: ";
	cin >> *petAge;
	
	if(*petAge < 0){
		cout << "OOPS! Age must be a number greater than 0.\n";
	}

	}while (*petAge < 0);

	do {
	cout << "Starting Hunger Level (0-10): ";
	cin >> *petHunger;

	if(*petHunger >= 10 || *petHunger < 0){
		cout <<"OOPS! Hunger level must be a number 0 through 10.";
	}

	}while(*petHunger > 10 || *petHunger < 0);

	// Print Menu

	showMenu();
	do{
	cin >> selection;

	
	if(selection == 1){
		changePetName(petName);
	}
	else if(selection == 2){
		feedPet(petHunger, petName);
	}
	else if(selection == 3){
		
	}
	else if(selection == 4){
		
	}
	else if(selection == 5){
		
	}
	else if(selection == 6){
		playing = false;
	}
	else{
		cout << "Must Choose an opion between 1-6.";
		break;
	}

	}while(selection != 6); // Loop until user quits


}while (playing == true);

    return 0;
}



// Function Definition

void showMenu(){
	cout << "	Choose from the following options:\n";
	cout << "	1) Change Pet Name\n";
	cout << "	2) Feed pet\n";
	cout << "	3) Play with Pet\n";
	cout << "	4) Pet Birthday!\n";
	cout << "	5) Show Pet Stats\n";
	cout << "	6) Quit\n";
	cout << "	Choice: ";


}

void changePetName(string *petName){
	cout << "\n\nWhat would you like to change your pet's name to?: ";
	cin >> *petName;
	cout << "Pet name successfully changed to " << *petName << "!\n\n";
}

void feedPet(int *petHunger, string *petName){
	if(*petHunger == 8 || *petHunger == 8 || *petHunger == 10){
		cout << "Whoa! You need to feed " << *petName << " more often! Their hunger level was " << *petHunger <<"!\n";
	}
	else if(*petHunger == 4 || *petHunger == 5 || *petHunger == 6 || *petHunger == 7){
		cout << "It's feeding time for " << *petName << "! Their hunger level was " << *petHunger << "!\n";
	}
	else if(*petHunger == 1 || *petHunger == 2 || *petHunger == 3){
		cout << *petName << " you're a big back - eating again even though your hunger level is only " << *petHunger << ".\n";
	}
	else if (*petHunger == 0){
		cout << "Bruh, you get no food " << *petName << " - you are already full!\n";
	}
	*petHunger = 0;
}

int playWithPet(int *petHunger, string *petName) {


}