#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int selection;
    string fileName = "jedi.txt";
    string jediName;
    string planet;
    string saber;

    // Intro and menu
    do {
        cout << "\nWelcome to Jedi Archives!\n";
        cout << "What would you like to do today?\n";
        cout << "1. Add a Jedi\n";
        cout << "2. Display all Jedi\n";
        cout << "3. Remove all Jedi (clear file)\n";
        cout << "4. Exit\n";
        cout << "Please choose an option: ";

        cin >> selection;
        cin.ignore(); 

        if (selection == 1) { // Add Jedi
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

        else if (selection == 2) { // Display all Jedi
            ifstream inFile(fileName);
            if (inFile.is_open()) {
                cout << "\nJedi currently in the Jedi Archive:\n";
                int count = 1;
                while (inFile >> jediName >> planet >> saber) {
                    cout << count << ". " << jediName << " from " << planet
                         << " that has a " << saber << " lightsaber.\n";
                    count++;
                }
                inFile.close();
            } else {
                cout << "Error: Could not open the file.\n";
            }
        }

        else if (selection == 3) { // Remove a Jedi
            
        }

        else if (selection == 4) { // Exit
            cout << "Thank you for helping the cause! Have a great day! May the Force be with you!!\n";
        }

        else { // Invalid option
            cout << "Invalid option.\n";
        }
    } while (selection != 4);

    return 0;
}
