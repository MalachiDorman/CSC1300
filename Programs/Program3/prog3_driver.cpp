/*******************************************************                          
* Purpose: should only contain the                     *
* main function definition                             *
*                                                      *
*******************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "prog3.h"

using namespace std;



int main(){
    
    bool playing = true;
    int selection=0;
    const int maxPlay = 20;
    int numPlayers=0;


    // Welcome message

    cout << "WELCOME TO THE ONE PIECE BOARD GAME!\n" << endl;
    
    do {

        do{ 
        cout << "\nHow many pirates are aboard? (Max 20): ";
        cin >> numPlayers;

        if (numPlayers < 1 || numPlayers > maxPlay) {
            cout << "Invalid number! Please enter between 1 and 20\n";
        }
    } while (numPlayers < 1 || numPlayers > maxPlay);

    
   
 
    string names[numPlayers];
    int boardSpace[numPlayers] = {0}; 
    string currentPlayer;
    const int maxBoardSpace = 25;
    double money[numPlayers] = {0.0};
    double moneyGen = 0.0;
    
    

    
    // Get player names

    getPlayersNames(names, numPlayers);


    // Roll Dice
    //do{
    rollDice(names, numPlayers, boardSpace);
    

    // Display final game status

    playerFinishedBoard(names, boardSpace, money, numPlayers);


    //}while(maxBoardSpace >= boardSpace[numPlayers]);

    bool invalidOptions = true;

    do{
    cout << "DO YOU WANT TO PLAY AGAIN?";
                cout << "\n\n1. YES\n";
                cout << "2. NO\n\n";
                cout << "SELECT AN OPTION: ";
                cin >> selection;

                if(selection == 1){
                    playing = true;
                    invalidOptions = false;
                    break;
                }
                else if(selection == 2){
                    playing = false;
                    break;
                }
                else{
                    cout << "\nNOT AN OPTION!\n\n";
                    invalidOptions = false;
                    playing = true;
                }
            }while (invalidOptions = true);
    }while (playing == true);

    return 0;
    }