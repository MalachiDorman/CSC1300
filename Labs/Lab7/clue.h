#ifndef CLUE_H
#define CLUE_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void printTitle();
int printMenu();
string hint(int weapon, int room);
bool inspectRooms(bool& room1, bool& room2, bool& room3);
void interviewSuspects(bool& sus1, bool& sus2, bool& sus3, int suspect);
bool getGuess(int suspect, int room, int weapon);

#endif
