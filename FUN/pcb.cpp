#include <iostream>

using namespace std;

double people;
double gas = 80;
double hotel;
double food = 95;
double total;
double car;
bool quit = false;
int selection;
bool doloop = false;

int main(){

    do {
    cout << "\n\nHow many people?: ";
    cin >> people;

    cout << "Hotel Price: ";
    cin >> hotel;

    cout << "How many cars?: ";
    cin >> car;

    gas = gas * car;

    total = people + hotel/people + gas/people + food;

    cout << "PCB " << people << " People\n\n";

    cout << "Gas: $" << gas << " for " << car << " car(s) | "   << "$" << gas/people << " per person\n\n";

    cout << "Hotel: $" << hotel << " | " << hotel/people << " per person\n\n";

    cout << "$" << food << " food budget\n\n";

    cout << "Total: $" << total <<  " per person\n\n\n";
    do{
    cout << "Calculate again?\n";
    cout << "1. Yes\n";
    cout << "2. No\n";
    cout << "Select an option: ";
    cin >> selection;

    
    if(selection == 1){
        quit = false;
        doloop = true;
        
    }
    else if(selection == 2){
        quit = true;
        doloop = true;
        
    }
    else{
        cout << "\nNot an Option\n\n";

        doloop = false;
    }
    } while (doloop == false);


    }while (quit == false);

    return 0;

}
