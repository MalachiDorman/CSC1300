/*
    Author: Kelsey Rainey
    Date: Jan 18, 2025
    File Name: lab3a.cpp
    Purpose: This is a lab that is meant to read your fortune
*/

/*
    Most ASCII art was generated with ChatGPT. None of it was by me. Don't judge me if it's bad :(
*/

/*Author: Malachi Dorman and Zavier fowler
 Date: 2/17/2025
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
 {
    // Variables
    int input = 0, random_num = 0;

    // Title 
    cout << "------The Omniscient Quack-----";
    cout << endl;
    cout << "  _      _      _" << endl;
    cout << ">(.)__ <(.)__ =(.)__" << endl;
    cout << " (___/  (___/  (___/ " << endl;
    cout << "\nWelcome! Today, we shall do the most accurate fortune reading we offer: The Cootie Catcher";

    // Get the first input to decide the user's fortune
    cout << "\n\nPlease, pick a color: ";
    cout << "\n1. Green";
    cout << "\n2. Yellow";
    cout << "\n3. Red";
    cout << "\n4. Blue";
    cout << "\nDon't think, just choose: ";
    cin >> input;

    // If the user entered an even number, the program should enter Case 0. Otherwise, it should enter Case 1.
    input = input % 2;
    srand(time(0));
    switch(input)  {
        /*
            Case 0 is for the even options. It should allow the user to pick 1, 3, 5, or 7 and display their fortune.
            If they do not pick 1, 3, 5, or 7, the program should generate a random number between 1-40.
                If the number is between 1-10, it should display the 1 fortune. If it's between 11-20, it should display the 3 option.
                And so on.  
        */
        case 0: 
            cout << "Now, pick either 1, 3, 5, or 7: ";
            cin >> input;

            if (input == 1) {
                cout << endl;
                cout << "                _____" << endl;
                cout << "             ,-"     "-." << endl;
                cout << "            / o       o \\" << endl;
                cout << "           /   \\     /   \\" << endl;
                cout << "          /     )-\"-(     \\ " << endl;
                cout << "         /     ( 6 6 )     \\" << endl;
                cout << "        /       \\ \" /       \\ " << endl;
                cout << "       /         )=(         \\ " << endl;
                cout << "      /   o   .--\"-\"--.   o   \\" << endl;
                cout << "     /    I  /  -   -  \\  I    \\" << endl;
                cout << ".--(    (_}y/\\       /\\y{_)    )--." << endl;
                cout << "(    \".___l\\/__\\_____/__\\/l___,\"    )" << endl;
                cout << "\\                                 /" << endl;
                cout << "  \"-._      o O o O o O o      _,-\"" << endl;
                cout << "      `--Y--.___________.--Y--\'" << endl;
                cout << "         |==.___________.==| " << endl;
                cout << "         `==.___________.==' `" << endl;

                cout << "Your grandmother will be abducted by aliens.\n\nDon't worry. She'll be happy there.";
            } else if (input == 3) {
                cout << endl;
                cout << "     ( (   " <<                   endl;
                cout << "      ) )  " <<                   endl;
                cout << "   ........" <<                   endl;
                cout << "   |      |]" <<                  endl;
                cout << "   \\      / " <<                 endl;
                cout << "    `----'  " <<                  endl;

                cout << "Don't drink the coffee tomorrow.\n\nNothing's wrong with it. It'll just taste gross. You're Welcome";
            } else if (input == 5) {
                cout << endl;
                cout << "        (˘ ︶ ˘).｡.*☆ " <<             endl;
                cout << "         (    )" <<                    endl;
                cout << "       (        )" <<                  endl;
                cout << "      (          )" <<                 endl;
                cout << "       \\  zZz  /" <<                  endl;
                cout << "        `-....-`" <<                   endl;

                cout << "You'll have a really kooky dream tonight.\n\nWrite it down. It'll probably make a good book.";
            } else if (input == 7) {
                cout << endl;
                cout << "  ,d88b.d88b," <<          endl;
                cout << "  88888888888" <<          endl;
                cout << "  `Y8888888Y'" <<          endl;
                cout << "    `Y888Y'" <<            endl;
                cout << "      `Y'" <<              endl;

                cout << "Tell your mommy you love her.\n\nIt won't change your future, but it'll probably make her happy.";
            } else 
                cout << "That was not a valid number...\nYou have decided to let fate choose.";
            
                // Generates a random number between 1-40
                random_num = 1 + rand() % 40;
                
            
                // Shows the user fortune
                if (random_num >= 1 && random_num <= 10) {
                    cout << endl;
                    cout << "                _____" << endl;
                    cout << "             ,-"     "-." << endl;
                    cout << "            / o       o \\" << endl;
                    cout << "           /   \\     /   \\" << endl;
                    cout << "          /     )-\"-(     \\ " << endl;
                    cout << "         /     ( 6 6 )     \\" << endl;
                    cout << "        /       \\ \" /       \\ " << endl;
                    cout << "       /         )=(         \\ " << endl;
                    cout << "      /   o   .--\"-\"--.   o   \\" << endl;
                    cout << "     /    I  /  -   -  \\  I    \\" << endl;
                    cout << ".--(    (_}y/\\       /\\y{_)    )--." << endl;
                    cout << "(    \".___l\\/__\\_____/__\\/l___,\"    )" << endl;
                    cout << "\\                                 /" << endl;
                    cout << "  \"-._      o O o O o O o      _,-\"" << endl;
                    cout << "      `--Y--.___________.--Y--\'" << endl;
                    cout << "         |==.___________.==| " << endl;
                    cout << "         `==.___________.==' `" << endl;

                    cout << "Your grandmother will be abducted by aliens.\n\nDon't worry. She'll be happy there.";
                } else if (random_num >= 11 && random_num  <=20) {
                    cout << endl;
                    cout << "     ( (   " <<                   endl;
                    cout << "      ) )  " <<                   endl;
                    cout << "   ........" <<                   endl;
                    cout << "   |      |]" <<                  endl;
                    cout << "   \\      / " <<                 endl;
                    cout << "    `----'  " <<                  endl;

                    cout << "Don't drink the coffee tomorrow.\n\nNothing's wrong with it. It'll just taste gross. You're Welcome";
                } else if (random_num >= 21) {
                    cout << endl;
                    cout << "        (˘ ︶ ˘).｡.*☆ " <<             endl;
                    cout << "         (    )" <<            endl;
                    cout << "       (        )" <<          endl;
                    cout << "      (          )" <<             endl;
                    cout << "       \\  zZz  /" <<          endl;
                    cout << "        `-....-`" <<           endl;

                    cout << "You'll have a really kooky dream tonight.\n\nWrite it down. It'll probably make a good book.";
                } else {
                    cout << endl;
                    cout << "  ,d88b.d88b," <<          endl;
                    cout << "  88888888888" <<          endl;
                    cout << "  `Y8888888Y'" <<          endl;
                    cout << "    `Y888Y'" <<            endl;
                    cout << "      `Y'" <<              endl;

                    cout << "Tell your mommy you love her.\n\nIt won't change your future, but it'll probably make her happy.";
                
                }
              
            break;
        


        /*
            Case 1 is for the odd options. It should allow the user to pick 2, 4, 6, or 8 and display their fortune.
            If they do not pick one of those options, the program should do the same thing as Case 0.  
        */
        case 1:
            cout << "Now, pick either 2, 4, 6, or 8: ";
            cin >> input;
           
            if (input == 2) {
                cout << endl;
                cout << "             ____ " << endl;
                cout << "            / . .\\" << endl;
                cout << "            \\  ---<" << endl;
                cout << "             \\  /" << endl;
                cout << "   __________/ /" << endl;
                cout << "-=:___________/" << endl;

                cout << "Your roommate will be infiltrated by the reptiliam political party and try to recruit you.\n\nWatch your back.";
            } else if (input == 4) {
                cout << "Tomorrow will be a solid 5/10.\n\nJust wildly unremarkable.";
            } else if (input == 6) {
                cout << endl;
                cout << "    ♪" <<             endl;
                cout << "   ♫    ♪" <<            endl;
                cout << "    ♪" <<             endl;
                cout << "    |" <<          endl;
                cout << "    |" <<          endl;

                cout << "You should start a band.\n\nYou won't sell out Madison Square Garden or anything, but you could really use a hobby.";
            } else if (input == 8) {
                cout << endl;
                cout << "     ======   " <<            endl;
                cout << "    ||        " <<            endl;
                cout << "    *====_.   " <<            endl;
                cout << "          ))  " <<            endl;
                cout << "    *-===**    " <<            endl;

                cout << "Be on the look out for the number 5 today.\n\nYou will know what I mean by that...";
            } else
                cout << "That was not a valid number...\nYou have decided to let fate choose.";
            
    
                // Generates a random number between 1-40
                random_num =  rand() % 40 + 1;
                
            
                // Displays the user's fortune
                if (random_num >= 1 && random_num <= 10)
                 {
                    cout << endl;
                    cout << "             ____ " << endl;
                    cout << "            / . .\\" << endl;
                    cout << "            \\  ---<" << endl;
                    cout << "             \\  /" << endl;
                    cout << "   __________/ /" << endl;
                    cout << "-=:___________/" << endl;

                    cout << "Your roommate will be infiltrated by the reptiliam political party and try to recruit you.\n\nWatch your back.";
                } else if (random_num >= 11 && random_num <= 20) {
                    cout << "Tomorrow will be a solid 5/10.\n\nJust wildly unremarkable.";
                } else if (random_num >= 21 && random_num <= 30) {
                    cout << endl;
                    cout << "    ♪" <<             endl;
                    cout << "   ♫    ♪" <<            endl;
                    cout << "    ♪" <<             endl;
                    cout << "    |" <<          endl;
                    cout << "    |" <<          endl;

                    cout << "You should start a band.\n\nYou won't sell out Madison Square Garden or anything, but you could really use a hobby.";
                } else if (random_num >= 31) {
                    cout << endl;
                    cout << "     ======   " <<            endl;
                    cout << "    ||        " <<            endl;
                    cout << "    *====_.   " <<            endl;
                    cout << "          ))  " <<            endl;
                    cout << "    *-===**    " <<            endl;

                    cout << "Be on the look out for the number 5 today.\n\nYou will know what I mean by that...";
                    
                }
            
                    
        break;
            
    }

    return 0;
}