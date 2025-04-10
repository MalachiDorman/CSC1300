/******************************************************************************

	Title:			Lab 10
	Author: 		Malachi Dorman
	Date Created: 	4/10/2025
	Last Updated: 	
	Purpose: 		A virtual pet game that utilizes pointers

*******************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;



// Variables

string _petName;
int _petAge;
int _petHunger;

int selection;
int random;

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

	}while (*petAge < 0); // Repeats until age is greater than zero


	do {
	cout << "Starting Hunger Level (0-10): ";
	cin >> *petHunger;

	if(*petHunger >= 10 || *petHunger < 0){
		cout <<"OOPS! Hunger level must be a number 0 through 10.";
	}

	}while(*petHunger > 10 || *petHunger < 0); // Repeats until hunger is in valid range


	do{

	// Print menu and ask for input
	showMenu();
	cin >> selection;

	// Change Pet Name
	if(selection == 1){
		changePetName(petName);
	}
	// Feed Pet
	else if(selection == 2){
		feedPet(petHunger, petName);
	}
	// Play with pet
	else if(selection == 3){
		playWithPet(petHunger,petName);
	}
	// Pet birthday
	else if(selection == 4){
		petBirthday(petAge);
	}
	// Show Pet Stats
	else if(selection == 5){
		showPetStats(petName, petAge, petHunger);
	}
	// Quit Game
	else if(selection == 6){
		playing = false;
	}
	// Invalid Option
	else{
		cout << "Must Choose an opion between 1-6.";
		break;
	}

	}while(selection != 6); // Loop until user quits


}while (playing == true); // Run game until user quits

    return 0;
}



// Function Definition

// Menu
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
// Change Pet Name
void changePetName(string *petName){
	cout << "\n\nWhat would you like to change your pet's name to?: ";
	cin >> *petName;
	cout << "\n\nPet name successfully changed to " << *petName << "!\n\n";
}
// Feed Pet
void feedPet(int *petHunger, string *petName){
	if(*petHunger == 8 || *petHunger == 8 || *petHunger == 10){
		cout << "\n\nWhoa! You need to feed " << *petName << " more often! Their hunger level was " << *petHunger <<"!\n\n";
	}
	else if(*petHunger == 4 || *petHunger == 5 || *petHunger == 6 || *petHunger == 7){
		cout << "\n\nIt's feeding time for " << *petName << "! Their hunger level was " << *petHunger << "!\n\n";
	}
	else if(*petHunger == 1 || *petHunger == 2 || *petHunger == 3){
		cout << "\n\n" << *petName << " you're a big back - eating again even though your hunger level is only " << *petHunger << ".\n\n";
	}
	else if (*petHunger == 0){
		cout << "\n\nBruh, you get no food " << *petName << " - you are already full!\n\n";
	}
	*petHunger = 0;
}
// Play with pet
int playWithPet(int *petHunger, string *petName) {
	srand(time(0));
	random = rand() % 3 + 1; // Random number 1-3

	*petHunger = *petHunger + random;

	if(*petHunger > 10){
		*petHunger = 10;
	}

	cout << "\n\n" << *petName << "'s hunger level is now " << *petHunger << " after play time.\n\n";
	return 0;
}
// Pet Birthday
void petBirthday(int *petAge){
	*petAge = *petAge + 1;

	cout << "\n\n\n                                            .=-..        .  .     .........                                             \n";
    cout << "                                           ..=:.        .==..     ..---:...                                             \n";
    cout << "                                          ......  ..    .....       ..-.--. .                                           \n";
    cout << "                                                  .::.                ...::::..                                         \n";
    cout << "                                                ..+:::.        ....                                                     \n";
    cout << "                                       ....       ..+::..     ..++.                                                     \n";
    cout << "                                     ..-===...    ...:+..     .=+-.   ...   ..:-...                                     \n";
    cout << "                                     .-==.                    ...   ..-=... ..+++..                                     \n";
    cout << "                                     ....                            .....   ..=+=.                                     \n";
    cout << "                                                       ....  ....             .....                                     \n";
    cout << "                                             ....    ..=##-..+*#..      ..                                              \n";
    cout << "                                          ....::.    .-#+-=##-=+#.. . ..:.                                              \n";
    cout << "                                          ...-..     .....+#%:...   . .--:.       . ........ ...                        \n";
    cout << "                             .       .... ......        ..+=*:        .....       ..*#*++++*#*:. .                      \n";
    cout << "                             .=%*+++*%*..               .-+==#.                  :%*==+++++++++%..                      \n";
    cout << "                           .#+=========+#-.            .:#+++=+..        ..-#*++**++++++++++++++*=                      \n";
    cout << "                         .=*=-===========+#           ..#+===+*=.       .=*+-++**+-=+++++++++++++*-..                   \n";
    cout << "                        .=+=-==============%..        .*+++++++#.     ..#++-+++#+--=++++++++++++++%                     \n";
    cout << "                       .:#=--==============+=.       .-*+=++-+=+*..   .#+--+++**=-=++++++++++++++*#:.                   \n";
    cout << "                       .+=---==============+%.       .%+++=-+++=+=. ..++=--+++**+=+++++++++++++++**-                    \n";
    cout << "                        *=--===============+#..   ...#*=-=+++==++#.  .*+--++++**++++++++++++++++**#:.                   \n";
    cout << "                        +=================++%.. ...==*=+*+=+=++==+*:=.*+-++++++#+++++++++++++++***%..                   \n";
    cout << "                       .-+===============+++#. .:#-+=-+###****###=-=*-%++++++++*#+++++++++++++***#-..                   \n";
    cout << "                       ..#+============++++#:..++--%----------------#=-=#+++++++*#***+++++******#-..                    \n";
    cout << "                       ...%++========+++++*-..#---=*----------------+=---%++++++++%************%..                      \n";
    cout << "                         ..**++++++++++++#..-*-----#--=*=------=*=--#=----+*+++++++*##*****##+..                        \n";
    cout << "                           ..##+++++++*%:...*------%--%-+------*:%--%------+**********#%**% ...                         \n";
    cout << "                             ...=*++%.... ..#------#--*%*-+*++-=%%--%------##*******#=..*.. .                           \n";
    cout << "                               ..:*:..    ...#+----*=-----+%%%------*----+%...****=....+:.                              \n";
    cout << "                                 .=.         .#+===*=--=*-=**=-=+---#===+#.   ..*..   .*                                \n";
    cout << "                                 .:-..       .*+==**-----#%+*##-----**===#    ..*..   .+.                               \n";
    cout << "                                 ..%.        .+%#:%#------****------#%-#%*.   .+:     ..*.                              \n";
    cout << "                                   :=.           :#=-------+=-------=*-      .=-.       .=*..                           \n";
    cout << "                             ..... .+:...*:      -*=-----------------+=..   ..*.......... .+:..                         \n";
    cout << "                           ..-#=%+.+%+%+*=% .. ..%%=-::::::::::::::--#%..   ..*-#=%=.*%=#:. %..                         \n";
    cout << "                           .#===##-##=+#=-==.. .-**+-::::::::::::::-=#*-.   ..#=++##-##++=#.#..                         \n";
    cout << "                       ......-%**%#%+*%==--%...=**=-+::::::::::::::=+=+#=......*%**%*#*#%-..=..                         \n";
    cout << "                       .:*++++++*+=-*-#===-=+#==+#=---::::::::::::---=*+=-%=------+==++::::-=#.                         \n";
    cout << "                       .:#++++++*+==*+#===--++===#=----::::::::::----=#===++------*++++-----=#.                         \n";
    cout << "                       .:#######%#####%#===--*===+#=----:::::::::---=#+===+##################*                          \n";
    cout << "                        .:#+++++#+==*%+===---#====#+==--::::::::---=+#===-#.+-----*++++----=%..                         \n";
    cout << "                         :#+++++*+==*+#*===---#===+%+==--+::::+--===%+===#..+-----*++++----=%..                         \n";
    cout << "                         :#+++++*+==*++*%#+=---+*==+*==--=*--*+--==*+==++...+-----*++++----=%..                         \n";
    cout << "                         :#+++++*+==*++*#=====#+===##+=---%--#=--=+##==++#..*-----*++++----=%..                         \n";
    cout << "                         :#*****#*++#*****%#*#+===#-------%--#=------#===+*.*=====*****=====%..                         \n";
    cout << "                     ..::-%#######**#######---*#**%*====+%####%+====+%**##--#*****#**##*****%:::..                      \n";
    cout << "                     ...:------------------------------------------:--------------------------:...                      \n";
    cout << "                                        .......................................                                             \n";
    cout << "                                             ..      .............. .......                                             \n";

	cout << "\n\nHAPPY BIRTHDAY!\n\n";

}
// Show Pet Stats
void showPetStats(string *petName, int *petAge, int *petHunger){
	cout << "\n\n ******** Virtual PET STATISTICS ********\n\n";
	cout << "Name: " << *petName << endl;
	cout << "Hunger Level: " << *petHunger << endl;
	cout << "Age: " << *petAge << "\n\n";
}