#include <iostream>
#include <string>

using namespace std;


int main(){

string *dogName;
string *dogBreed;
int *dogAge;
int size;




cout << "How many dogs can you adopt?: ";

cin >> size;
cin.ignore();

dogName = new string[size];
dogBreed = new string[size];
dogAge = new int[size];


for(int i= 0; i < size; i++){
    cout << "**** DOG " << i + 1 << " ****\n";
    cout << "NAME: ";
    getline(cin, dogName[i]);
    
    cout << "BREED: ";
    getline(cin, dogBreed[i]);
    

    cout <<  "AGE: ";
    cin >> dogAge[i];
    cin.ignore();
}

cout << "\n************************\n\n";
cout << "Print the dogs\n";

for(int i= 0; i < size; i++){
    cout << "\n**** DOG " << i + 1 << " ****\n";
    cout << "NAME: ";
    cout << dogName[i];

    cout << "\nBREED: ";
    cout << dogBreed[i];

    cout << "\n" << "AGE: ";
    cout << dogAge[i];

}





delete [] dogName, dogBreed, dogAge;

return 0;
}