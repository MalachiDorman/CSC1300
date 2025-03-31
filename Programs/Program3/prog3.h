/******************************************************                          
* Purpose: should contain your include guards         *
* (or #pragma once), all the #include files necessary *
* to run your program, using namespace std,           *
* global constant variables, and all                  *
* function prototypes                                 *
*                                                     *
*******************************************************/

#ifndef PROG3_H
#define PROG3_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


void getPlayersNames(string names[], int numPlayers);
int rollDice(string names[], int numPlayers, int boardSpace[]);
void playerFinishedBoard(string names[], int boardSpace[], double money[], int numPlayers);
void activateActionOnSpace(string names[], int boardSpace[], double money[], int numPlayers);
void printSmiley();
void printFrown();

#endif
