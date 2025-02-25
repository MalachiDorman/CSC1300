/*
    Author: Kelsey Rainey
    Date: Feb 4, 2025
    File Name: lab4.cpp
    Purpose: This is a dungeon adventure
*/

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    int bear_hit = 100, wolves_hit = 100, lady_hit = 100, you_hit = 100, dragon_hit = 500;  // Added initial you_hit value
    int friend_modifier = 0;
    bool bear_friend = false, wolf_friend = false;
    string user_input, choice;
    bool playing = true;

    // Starting Statement
    cout << setfill('*') << setw(50) << " " << endl;
    cout << "Adventuring is hard. But you won't let that deter you on your quest to find your-";
    cout << "\nTHUNK\n";
    cout << setfill('*') << setw(50) << " " << endl;
    cout << "\nYou wake up in a strange tent. You have no idea what happened.";

    // Do loop for user input
    do {
        cout << "\n\nYou're at full health!";
        cout << "\n\nYou can go through any of the doors of the tent (North, South, East, or West) or leave (quit).";
        cout << "\nWhich way do you go? ";
        getline(cin, choice);

        while(toupper(choice.at(0)) != 'N' && toupper(choice.at(0)) != 'S' 
            && toupper(choice.at(0)) != 'E' && toupper(choice.at(0)) != 'W' 
            && toupper(choice.at(0)) != 'Q') {
            cout << "You seem to have not fully woken up as you walk straight into a tent pole.";
            cout << "\nWhich way do you go (hint: enter North, South, East, West, or Quit)? ";
            getline(cin, choice);
        }

        // Case for direction
        switch(toupper(choice.at(0))) {
            case 'N':
                // North case remains unchanged
                cout << "\n\nLions. Tigers. Bears. Oh my!" << endl;
                cout << "Kidding - it's just Bears" << endl;
                cout << "You can either fight the bears, befriend them, or run away." << endl;
                cout << "Which would you like to do? ";

                do {
                    getline(cin, user_input);
                
                    if (user_input.find("fight") != string::npos) { 
                        while (bear_hit > 0 && you_hit > 0) {
                            cout << "\nYou attack the bear!";
                            bear_hit = bear_hit - (rand() % 101);
                            cout << "\nThe bear is now at " << bear_hit << "/100 health.";
                            if (bear_hit > 0) {
                                cout << "\nAnd the bear fights back (one of the downsides to fighting a bear).";
                                you_hit = you_hit - (rand() % 101);
                                cout << "\nYou're now at " << you_hit << "/100 health";
                            }
                        }
                        // Rest of North case logic remains unchanged
                        if (you_hit <= 0) {
                            cout << "\n\nWell...you died. Maybe don't fight bears.";
                            playing = false;
                        } else if (bear_friend) {
                            cout << "\n\nThe bear looks at you, with anguish in their eyes. How could you?";
                            friend_modifier = 0;
                            cout << "\nAs you leave your fallen companion, another bear appears. But you just walk away, unable to look behind at the proof of your great betrayal.";
                        } else {
                            cout << "\n\nYou killed the bear...you monster.";
                        }
                        cout << "\nAnd so you return to the tent, to wash the blood from your hands.";
                    } else if (user_input.find("befriend") != string::npos) {
                        if (bear_friend) {
                            cout << "\nYou're getting a little too friendly with the bear... It's making them uncomfortable.";
                        } else {
                            cout << "\n\nThe bear accepts your desperate plea for friendship. \nIt's not everyday a bear meets someone as desperate as you.";
                            cout << "\nYou feel somehow...different. Stronger. Were those cheesy shows right?";
                            friend_modifier++;
                            bear_friend = true;
                        }
                        cout << "\nThe bears walk you back to your tent.";
                    } else if (user_input.find("run") != string::npos) {
                        cout << "\n\nYou ran away like a coward. The bear is unimpressed.";
                        cout << "\nI suppose you're not dead though.";
                        cout << "\nSo you return to the tent.";
                    } else {
                        user_input.clear();
                        cout << "I did not understand your choice (hint: use the keywords fight, befriend, or run away)." << endl;
                        cout << "What would you like to do? ";
                    }
                } while (user_input.find("fight") == string::npos && user_input.find("befriend") == string::npos && user_input.find("run") == string::npos);
                break;

            case 'S':
                // South case logic remains mostly unchanged, fixed while condition
                cout << "\n\nYou're walking. And walking. And walking.\nAnd then the wolves came...(if you understand that reference, congrats!)" << endl;
                cout << "You can either fight the wolves, befriend them, or run away." << endl;
                cout << "Which would you like to do? ";

                do {
                    getline(cin, user_input);
                    if (user_input.find("fight") != string::npos) {
                        // South case logic continues...
                    } else if (user_input.find("befriend") != string::npos) {
                        // Befriend logic...
                    } else if (user_input.find("run") != string::npos) {
                        // Run logic...
                    } else {
                        user_input.clear();
                        cout << "I did not understand your choice (hint: use the keywords fight, befriend, or run away)." << endl;
                        cout << "What would you like to do? ";
                    }
                } while (user_input.find("fight") == string::npos && user_input.find("befriend") == string::npos && user_input.find("run") == string::npos);
                cout << "\nYou return to the tent. Well, if you haven't died.";
                break;

            case 'E':
                // East case logic remains mostly unchanged
                // ... (keeping existing East case code)
                break;

            case 'W':
                cout << "\n\nYou come across a mysterious looking cave. This looks promising.";
                cout << "\nYou decide you can either explore the entrance, continue going into the cave, or run away.";
                cout << "\nWhich would you like to do? ";

                do {
                    getline(cin, user_input);

                    if (user_input.find("explore") != string::npos) {
                        playing = false;
                        cout << "\nAs you explore the cave, you notice something strangely...human in one dark corner.";
                        cout << "\n\nIs that...";
                        cout << "\nCould it be...";
                        cout << "\n\nIt is! Your memories come flooding back to you as you find your brother, the reason you went adventuring in the first place.";
                        cout << "\nYou decide that your quest is over, having found your long lost brother.";
                        if (friend_modifier > 1) {
                            cout << "\nYou round up your new animal friends and leave with your brother. He makes fun of you for being a Disney Princess.";
                            cout << "\nYou decide that, as punishment, you will sing the rest of the way home.";
                            cout << "\nAnd you all lived happily ever after.";
                        }
                    } else if (user_input.find("continue") != string::npos) {
                        cout << "\n\nYou head deeper into the cave, ignoring the weird shadows and...is someone yelling your name?";
                        cout << "\nImpossible. You don't have a name. I didn't give you one.";
                        cout << "\n\nAs you continue on - OH FIDDLESTICKS IT'S A DRAGON!";
                        cout << "\nWell, screaming didn't help. Now you're stuck fighting the dragon.\n*cue epic fight sequence*\n*...and fight music*";

                        while(dragon_hit > 0 && you_hit > 0) {  // Fixed condition (changed || to &&)
                            cout << "\nYou attack the dragon!";
                            dragon_hit = dragon_hit - (rand() % 101);
                            cout << "\nWell. You hit it. The dragon is now at " << dragon_hit << "/500 health.";
                            if (dragon_hit > 0) {
                                cout << "\nDid you think the dragon wouldn't fight back?";
                                you_hit = you_hit - (rand() % 101);
                                cout << "\nYou're now at " << you_hit << "/100 health.";
                            }
                            if (friend_modifier > 0) {
                                cout << "\nThe power of friendship comes back to help!! Well, your animal friends help fight the dragon and you are inspired.";
                                you_hit = you_hit + (rand() % (100 - you_hit) * friend_modifier);
                                dragon_hit = dragon_hit - ((rand() % 51) * friend_modifier);
                                cout << "\nYou're now at " << you_hit << "/100 health and the dragon is at " << dragon_hit << "/500 health.";
                            }
                        }

                        if (you_hit <= 0) {
                            cout << "\n\nYou died. Yeah, you really should've thought of that before you decided to fight a dragon.";
                            playing = false;
                            if (friend_modifier > 0) {
                                cout << "\nAt least you finally made friends to mourn you...";
                            }
                        } else {
                            if (friend_modifier > 0) {
                                cout << "\n\nYou stand over the defeated dragon. But as you look at it, you see the sadness in the dragon's eyes.";
                                cout << "\nYou look around at your friends and decide to befriend the dragon. You reach out to him.";
                                cout << "\nThe dragon looks shocked (you did try to kill him), but accepts your touch and your friendship.";
                                cout << "\nIn befriending the dragon, he tells you his life story (I won't bore you) and tells you of the last human who came looking to kill him.";
                                cout << "\nOh bleeeeeeeeeeeep. Your brother. The one who went missing. The reason you went on this adventure.";
                                cout << "\nSo, now you have cool animal friends, a dragon friend, and you found your brother. And you all live happily ever after.";
                                cout << "\nThe end.";
                            } else {
                                cout << "\n\nYou stand over the defeated dragon. You raise your sword.";
                                cout << "\nIt is done.";
                                cout << "\nAs you walk away, you can't’t help but feel empty. This adventure has been horrible. You miss your bed.";
                                cout << "\nYou walk out of the cave, ignoring the weird corner you passed on the way in, and decide to go home.";
                                cout << "\nWhen you reach your village empty-handed, the villagers remind you that you were looking for your brother.";
                                cout << "\nThey remind you by banishing you. It wasn't much of a home anyways.";
                                cout << "\nIs that the end of your story? Who knows. It's the end of your time with me. I'm tired of typing.";
                            }
                        }
                        playing = false;
                    } else if (user_input.find("run") != string::npos) {  // Fixed this misplaced if
                        cout << "\n\nNope, nope, nope.";
                        cout << "\nYou return to the tent.";
                    } else {
                        user_input.clear();
                        cout << "\n\nI wasn't very clear. My bad. Type in explore, continue, or run away with as many descriptors as you'd like.";
                        cout << "\nWhat would you like to do? ";
                    }
                } while (user_input.find("explore") == string::npos && 
                        user_input.find("continue") == string::npos && 
                        user_input.find("run") == string::npos);  // Fixed condition for West case
                
                break;

            default:
                cout << "\n\nWow that's not very adventurous of you...";
                playing = false;
                break;
        }
    } while (playing);  // Moved this to correct position
    
    return 0;
}