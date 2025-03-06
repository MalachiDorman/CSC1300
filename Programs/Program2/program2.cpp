/**************************************************
* Name: Malachi Dorman                            *
* Class: CSC 1300-002                             *
* Assignment: Program 2                           *
* Purpose: A Jedi Database that can add, remove   *
* or view jedis.                                  *
* Date: 2/26/2025                                 *                                  
* Modified: 3/5/2025                              *
***************************************************/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int selection;
    string fileName = "jedi.txt";
    string tempFileName = "temp.txt";
    string jediName;
    string planet;
    string saber;

    // Intro and menu
    do {
        cout << "\nWelcome to Jedi Archives!\n";
        cout << "What would you like to do today?\n";
        cout << "1. Add a Jedi\n";
        cout << "2. Display all Jedi\n";
        cout << "3. Remove a Jedi\n";
        cout << "4. Exit\n";
        cout << "Please choose an option: ";

        cin >> selection;
        cin.ignore(); 

        // Add Jedi
        if (selection == 1) { 
            ofstream outFile(fileName, ios::app); 
            if (outFile.is_open()) {
                cout << "Enter the Jedi's name: ";
                getline(cin, jediName);
                cout << "Enter the planet that the Jedi is from: ";
                getline(cin, planet);
                cout << "Enter the Jedi's lightsaber color: ";
                getline(cin, saber);

                outFile << jediName << ":" << planet << "|" << saber << endl;
                outFile.close();

                cout << jediName << " was added successfully!\n";
            } else {
                cout << "Error: Could not open the file.\n";
            }
        }

        // Display all Jedi
        else if (selection == 2) { 
            ifstream inFile(fileName);
            if (inFile.is_open()) {
                cout << "\nJedi currently in the Jedi Archive:\n";
                int count = 1;
                while (getline(inFile, jediName, ':') && getline(inFile, planet, '|') && getline(inFile, saber)) {
                    cout << count << ". " << jediName << " from " << planet
                         << " that has a " << saber << " lightsaber.\n";
                    count++;
                }
                inFile.close();
            } else {
                cout << "Error: Could not open the file.\n";
            }
        }

        // Remove a Jedi
        else if (selection == 3) { 
            ifstream inFile(fileName);

            cout << "\nJedi currently in the Jedi Archive:\n";
            int count = 1, totalJedi = 0;
            string line;
            while (getline(inFile, line)) {
                cout << count << ". " << line << endl;
                count++;
                totalJedi++;
            }
            inFile.close();
        
        // If there are no jedi in database to remove
        if (totalJedi == 0) {
            cout << "No Jedi to remove.\n";
            continue;
        }
    

    // Var for removing Jedi
    int removeJedi;
    cout << "Enter the number of the Jedi to remove: ";
    cin >> removeJedi;

    // While for invalid choice
    while (cin.fail() || removeJedi < 1 || removeJedi > totalJedi) {
        cin.clear();
        cin.ignore();
        cout << "Invalid choice. Enter a valid number: ";
        cin >> removeJedi;
    }

    inFile.open(fileName);
    ofstream tempFile(tempFileName);
    count = 1;
    while (getline(inFile, line)) {
        if (count != removeJedi) {
            tempFile << line << endl;
        }
        count++;
    }
    inFile.close();
    tempFile.close();

    // Replaces the temp.txt with updated jedi.txt
    remove("jedi.txt");
    rename("temp.txt", "jedi.txt");

        }

        // Exit
        else if (selection == 4) { 
            cout << "Thank you for helping the cause! Have a great day! May the Force be with you!!\n";
        }

        // Invalid option
        else { 
            cout << "Invalid option.\n";
        }
    } while (selection != 4);

    return 0;
}
