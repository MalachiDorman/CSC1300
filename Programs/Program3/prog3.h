/******************************************************                          
* Purpose: should contain your include guards         *
* (or #pragma once), all the #include files necessary *
* to run your program, using namespace std,           *
* global constant variables, and all                  *
* function prototypes                                 *
*                                                     *
*******************************************************/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

const int maxPlay = 20;
const int boardSpace = 25;

void getPlayersNames(string names[], int numPlayers);
int rollDice(string playerName);
void playerFinishedBoard(string names[], int boardSpace[], double money[], int numPlayers);
void activateActionOnSpace(string names[], int boardSpace[], double money[], int numPlayers, int currentPlayer);
void printSmiley();
void printFrown();

