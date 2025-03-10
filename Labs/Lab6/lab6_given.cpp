/*
    Title lab6_given.cpp
    Author: April R. Crockett and Malachi Dorman
    Date: 3/2/2025
    Purpose: work with loops and files
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void printAllDragons();
void printDragonsWithSyndrome();
void removeDragon();
void printDragonsUnder19();
void printDragonsWithFireOrFlame();
void registerNewDragon();

int main()
{
    int choice;

    do
    {
        //display menu to user

        cout << "\nWelcome to Scalebane Urgent Care in Emberisle!\n\n";
        cout << "Please choose from the following options:\n";
        cout << "1. Print all dragons in Scalebane Urgent Care Center.\n";
        cout << "2. Print all dragons that contain the word \"fire\" or \"flame\" in its name.\n";
        cout << "3. Print all dragons under 19 years old.\n";
        cout << "4. Print all dragons that are suffering from something with \"syndrome\" in the name.\n";
        cout << "5. Register a new dragon in Scalebane Urgent Care Center.\n";
        cout << "6. Dragon healed! Remove a dragon from the center.\n";
        cout << "7. Exit Program.\n";
        cout << "Please choose 1-7: ";
        cin >> choice;

        //validate menu choice
        //////////////////////////////////////////////TODO: validate menu choice!!!//////////////////////////////////////////////

        //switch statement to execute the user's choice
        switch (choice)
        {
            case 1:
                //print all dragons in Scalebane Urgent Care Center
                printAllDragons();
                break;
            case 2:
                //print all dragons that contain the word "fire" or "flame" in its name
                //////////////////////////////////////////////TODO: call this function!!!//////////////////////////////////////////////
                break;
            case 3:
                //print all dragons under 19 years old
                //////////////////////////////////////////////TODO: call this function!!!//////////////////////////////////////////////
                break;
            case 4:
                //print all dragons that are suffering from something with "syndrome" in the name
                printDragonsWithSyndrome();
                break;
            case 5:
                //register a new dragon in Scalebane Urgent Care Center
                //////////////////////////////////////////////TODO: call this function!!!//////////////////////////////////////////////
                break;
            case 6:
                //remove a dragon from the center
                removeDragon();
                break;
            case 7:
                cout << "\n\nExiting program..." << endl;
                break;
            
        } 
    }while (choice != 7);

    cout << "\nThank you for using Scalebane Urgent Care in Emberisle!\n";
    return 0;
}

//Function: printAllDragons()
//Purpose: Print all dragons in Scalebane Urgent Care Center
//Input: None
//Output: None
void printAllDragons()
{
    //DEFINE & OPEN INPUT FILES
    ifstream dragonTypeFile("Dragon-Type.txt");
    ifstream illnessDescFile("Illness-Description.txt");
    ifstream ageFile("Dragon-Age.txt");
    string type, illness, age;
    int dragonAge;
    int numDragons = 0;

    //IF INPUT FILES CAN'T BE OPENED, PRINT ERROR AND EXIT FUNCTION
    if(dragonTypeFile.fail() || illnessDescFile.fail() || ageFile.fail())
    {
        cout << "Error opening one of the three files.\n";
        return;
    }

    //PRINT ALL THE DRAGONS TO THE SCREEN
    cout << "\nAll dragons in Scalebane Urgent Care Center:\n";
    while(getline(dragonTypeFile, type,',') && getline(illnessDescFile, illness,',') && getline(ageFile, age,','))
    {
        cout << setw(2) << ++numDragons << ": " << setw(28) << type << setw(30) << illness << setw(5) << age << endl;
    }

    //CLOSE ALL THE FILES
    dragonTypeFile.close();
    illnessDescFile.close();
    ageFile.close();
    
    cout << "\n\nTotal number of dragons printed: " << numDragons << endl; // Output the total number of dragons
}

//Function: printDragonsWithFireOrFlame()
//Purpose: Print all dragons that contain the word "fire" or "flame" in its name
//Input: None
//Output: None

void printDragonsWithFireOrFlame() 
{
    ifstream dragonTypeFile("Dragon-Type.txt");
    ifstream illnessDescFile("Illness-Description.txt");
    ifstream ageFile("Dragon-Age.txt");
    string type, illness, age;
    int numDragons = 0;
    int dragonAge;

    if(dragonTypeFile.fail() || illnessDescFile.fail() || ageFile.fail())
    {
        cout << "Error opening one of the three files.\n";
        return;
    }

    cout << "\nDragons with \"fire\" or \"flame\" in its name\n";
    while(getline(dragonTypeFile, type,',') && getline(illnessDescFile, illness,',') && getline(ageFile, age,','))
    {
        if(type.find("fire") != string::npos || type.find("Fire") != string::npos || type.find("Flame") != string::npos || type.find("flame") != string::npos)
        {
            cout << setw(2) << ++numDragons << ": " << setw(28) << type << setw(30) << illness << setw(5) << age << endl;
        }
    }
}




//Function: printDragonsUnder19()
//Purpose: Print all dragons under 19 years old
//Input: None
//Output: None



//////////////////////////////////////////////TODO: write this function!!!//////////////////////////////////////////////



//Function: printDragonsWithSyndrome()
//Purpose: Print all dragons that are suffering from something with "syndrome" in the name
//Input: None
//Output: None
void printDragonsWithSyndrome()
{
    //DEFINE & OPEN INPUT FILES
    ifstream dragonTypeFile("Dragon-Type.txt");
    ifstream illnessDescFile("Illness-Description.txt");
    ifstream ageFile("Dragon-Age.txt");
    string type, illness, age;
    int dragonAge;
    int numDragons = 0;

    //IF INPUT FILES CAN'T BE OPENED, PRINT ERROR AND EXIT FUNCTION
    if(dragonTypeFile.fail() || illnessDescFile.fail() || ageFile.fail())
    {
        cout << "Error opening one of the three files.\n";
        return;
    }

    //PRINT ALL THE DRAGONS TO THE SCREEN IF THEY HAVE "syndrome" IN THE NAME
    cout << "\nDragons with \"syndrome\" in its name:\n";
    while(getline(dragonTypeFile, type,',') && getline(illnessDescFile, illness,',') && getline(ageFile, age,','))
    {
        if(illness.find("syndrome") != string::npos || illness.find("Syndrome") != string::npos)
        {
            cout << setw(2) << ++numDragons << ": " << setw(28) << type << setw(30) << illness << setw(5) << age << endl;
        }
    }

    //CLOSE ALL THE FILES
    dragonTypeFile.close();
    illnessDescFile.close();
    ageFile.close();
    cout << "\n\nTotal number of dragons with \"syndrome\" in its name: " << numDragons << endl;
}

//Function: registerNewDragon()
//Purpose: Register a new dragon in the center
//Input: None
//Output: None


//////////////////////////////////////////////TODO: write this function!!!//////////////////////////////////////////////





//Function: removeDragon()
//Purpose: Remove a dragon from the center
//Input: None
//Output: None
void removeDragon()
{
    //DEFINE & OPEN INPUT FILES
    ifstream dragonTypeFile("Dragon-Type.txt");
    ifstream illnessDescFile("Illness-Description.txt");
    ifstream ageFile("Dragon-Age.txt");
    //DEFINE & CREATE OUTPUT FILES
    ofstream tempDragonTypeFile("tempDragonTypeFile.txt");
    ofstream tempIllnessDescFile("tempIllnessDescFile.txt");
    ofstream tempAgeFile("tempAgeFile.txt");

    //VARIABLE DEFINITIONS
    string type, illness, age;
    int dragonAge;
    int numDragons = 0;
    int dragonToRemove;
    int dragonCount = 0;

    //IF INPUT FILES CAN'T BE OPENED, PRINT ERROR AND EXIT FUNCTION
    if(dragonTypeFile.fail() || illnessDescFile.fail() || ageFile.fail())
    {
        cout << "Error opening one of the three files.\n";
        return;
    }

    //PRINT ALL THE DRAGONS TO THE SCREEN
    cout << "\n\nDragons in Scalebane Urgent Care Center:\n";
    while(getline(dragonTypeFile, type,',') && getline(illnessDescFile, illness,',') && getline(ageFile, age,','))
    {
        cout << setw(2) << ++numDragons << ": " << setw(28) << type << setw(30) << illness << setw(5) << age << endl;
    }
    // CLOSE FILES AFTER PRINTING
    dragonTypeFile.close();
    illnessDescFile.close();
    ageFile.close();

    //REOPEN THE FILES TO REMOVE THE DRAGON
    dragonTypeFile.open("Dragon-Type.txt");
    illnessDescFile.open("Illness-Description.txt");
    ageFile.open("Dragon-Age.txt");

    //GET THE DRAGON TO BE REMOVED FROM THE USER
    cout << "\nEnter the number of the dragon you want to remove: ";
    cin >> dragonToRemove;

    //READ THROUGH THE INPUT FILES AND PRINT ALL THE DATA TO THE TEMPORARY FILES UNLESS IT IS THE DRAGON TO BE REMOVED
    while(getline(dragonTypeFile, type,',') && getline(illnessDescFile, illness,',') && getline(ageFile, age,','))
    {
        dragonCount++;
        if(dragonCount != dragonToRemove)
        {
            tempDragonTypeFile << type << ",";
            tempIllnessDescFile << illness << ",";
            tempAgeFile << age << ",";
        }
        else
            cout << "\nDragon removed!\n";
    }

    //CLSOE ALL THE FIILES
    dragonTypeFile.close();
    illnessDescFile.close();
    ageFile.close();
    tempDragonTypeFile.close();
    tempIllnessDescFile.close();
    tempAgeFile.close();

    //DELETE THE ORIGINAL FILES AND RENAME THE TEMPORARY FILES TO THE ORIGINAL FILE NAMES
    remove("Dragon-Type.txt");
    remove("Illness-Description.txt");
    remove("Dragon-Age.txt");

    rename("tempDragonTypeFile.txt", "Dragon-Type.txt");
    rename("tempIllnessDescFile.txt", "Illness-Description.txt");
    rename("tempAgeFile.txt", "Dragon-Age.txt");
}