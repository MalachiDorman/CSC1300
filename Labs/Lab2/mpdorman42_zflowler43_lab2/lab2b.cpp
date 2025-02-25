/**************************************************
* Name: Malachi Dorman and Zavier Fowler          *
* Class: CSC 1300-002                             *
* Assignment: Lab 2b                              *
* Date: 2/06/2025                                 *
* Last Modified: 2/06/2025                        *
***************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string user_name;
    int user_age;
    char user_fav_color;
    string crush_name;
    int crush_age;
    char crush_fav_color;
    float result;

    // Title
    cout << "**** WELCOME TO THE CRUSH COMPATIBILITY TESTER*** \n";

    // Questions regaurding the User
    cout << "\nEnter your name: ";
    getline(cin, user_name);

    cout << "Enter your age: ";
    cin >> user_age;

    cout << "What is the first letter of your favorite color? ";
    cin >> user_fav_color;

    // Quastions regarding the Crush
    cin.ignore();

    cout << "Enter your crush's name: ";
    getline(cin, crush_name);

    cout << "Enter your crush's age:";
    cin >> crush_age;

    cout << "What is the first letter of your crush's favorite color? ";
    cin >> crush_fav_color;

    // Math behind compatiblity
    result= ((static_cast<double>(user_age) / static_cast<double>(crush_age)) * 90 - (user_fav_color + crush_fav_color) % 10);
    // Result 
    cout << user_name << " and " << crush_name << " are " << fixed << setprecision(2) << result << " compatiblity.";
    cout << endl;
     

    return 0;

}