#include <iostream>
#include "Game.h"
#include <stdlib.h>
#include <zconf.h>
#include <vector>
#include "enemies.h"

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    double x = 8;
    double y = 3;
    string narratorName = "[Narrator]";
    Game Game;
    vector<string> enemy;
    enemies monster;
    string approching;
    bool et = true;
    while (et) {
        cout << "8 * 3 = " << x * y << endl;
        cout << "is there anything else? y/n" << endl;
        char ans;
        string clear;
        cin >> ans;
        cin >> clear;
        if (ans == 'y') {
            cout << "Rather willing aren't you?" << endl;
            cout << "But I think it would be more 'fun' to do this.... " << endl;
            cin >> ans;
            ans = 'n';
        }
        if (ans == 'n') {
            string x;
            cout << "he he he he" << endl;
            cin.ignore();
            cout << "It will not be THAT easy" << endl;
            cin.ignore();
            cout << "Lets play a little game....." << endl;
            cin.ignore();
            cout << "See you inside...." << endl;
            sleep(1);
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "*.."
                     << endl;
                sleep(1);
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << ".*."
                     << endl;
                sleep(1);
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "..*"
                     << endl;
                sleep(1);
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << "*.."
                     << endl;
                sleep(1);
                cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << ".*."
                     << endl;
                sleep(1);

            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
                 << "finished loading enter any key to start: "
                 << endl;
            cin >> x;
            int done = 0;
            while (done == 0) {
                cout << Game.narrator(0) << endl;
                cin >> x;
                if (x == "y") {
                    cout << "What would you lke it to be?: " << endl;
                    cin >> narratorName;
                    narratorName = "[" + narratorName + "]";
                    cout << Game.narrator(1) << narratorName << endl;
                    sleep(2);
                    done = 1;
                    cout << narratorName + "To prove I am nice ask me ANY question and I will answer." << endl;
                    string answer;
                    cin >> answer;
                    if (rand()%2+1 == 1){
                        cout << Game.narrator(3) << endl;
                    }else{
                        cout << Game.narrator(4) << endl;
                    }
                }else{
                    cout << Game.narrator(2) << endl;
                    done = 1;
                }
            }
            cout << "your starting health: " << Game.health() << endl;
            sleep(2);
            bool first_room = true;
            //while (first_room) {
                cout << narratorName + " You find yourself in an empty room with one door do you choose to enter?(y/n) " << endl;
                string answ;
                cin >> answ;
                if (answ == "y"){
                    first_room = false;
                    cout << narratorName + " You enter the door" << endl;
                }else{
                    cout << narratorName + " You sit there for..... a while" << endl;
                    sleep(4);
                    cout << narratorName + " Until something draws you in..." << endl;
                    first_room = false;
                }
            //}
            bool alive = true;
            while (alive) {
                if (Game.health() == "0") {
                    alive = false;
                    cout << narratorName + "Oh... um... so it appears that... " << endl;
                    sleep(2);
                    cout << narratorName + "You Died.... " << endl;
                    et = false;
                }
                //cout << Game.voice(2, narratorName) << endl;

                cin >> x;
                if (x == "y") {
                    int randm = rand() % 100 + 1;
                    if (randm <= 50) {
                        randm = rand() % 100 + 1;
                        if (randm < 76) {
                            cout << Game.voice(8, narratorName) << endl;
                        } else if (randm > 74 && randm < 94) {
                            cout << Game.voice(9, narratorName) << endl;
                        } else {
                            randm = rand() % 100 + 1;
                            if (randm < 81) {
                                Game.voice(10, narratorName);
                            } else {
                                randm = rand() % 100 + 1;
                                if (randm < 81) {
                                    cout << Game.voice(13, narratorName) << endl;
                                    sleep(1);
                                    cout << Game.voice(14, narratorName) << endl;
                                } else {
                                    cout << Game.voice(15, narratorName);
                                    monster.summon(enemy, "ALGOR WINDSLAYER", "fire", "200", "15", "20");
                                }
                            }
                        }
                    } else if (randm > 70 && randm < 100) {

                    } else if (randm > 50 && randm < 71) {

                    }
                    string command;
                    cin >> command;
                    if (command == "/damage") {
                        Game.danger();
                        cout << Game.voice(0, narratorName) << endl;
                        Game.damage(5);
                    } else if (command == "/health") {
                        cout << narratorName + "Your health is: " + Game.health() << endl;
                    } else if (command == "/summon") {
                        cout << narratorName + "What is the Name you wish to give to this foe? " << endl;
                        string name;
                        cin >> name;
                        cout << narratorName +
                                "What is the Element you wish to give to this foe?(fire, water, earth, air) " << endl;
                        string element;
                        cin >> element;
                        cout << narratorName + "What is the Health you wish to give to this foe?(1-20) " << endl;
                        string health;
                        cin >> health;
                        cout << narratorName + "What is the Power you wish to give to this foe?(1-20) " << endl;
                        string power;
                        cin >> power;
                        cout << narratorName + "What is the Level you wish to give to this foe?(1-20)" << endl;
                        string level;
                        cin >> level;
                        monster.summon(enemy, name, element, health, power, level);
                    }
                }else{
                    cout << narratorName + " You sit there for..... a while" << endl;
                    sleep(4);
                    cout << narratorName + " Until something draws you in..." << endl;

                    int randm = rand() % 100 + 1;
                    if (randm <= 50) {
                        randm = rand() % 100 + 1;
                        if (randm < 76) {
                            cout << Game.voice(8, narratorName) << endl;
                        } else if (randm > 74 && randm < 94) {
                            cout << Game.voice(9, narratorName) << endl;
                        } else {
                            randm = rand() % 100 + 1;
                            if (randm < 81) {
                                Game.voice(10, narratorName);
                            } else {
                                randm = rand() % 100 + 1;
                                if (randm < 81) {
                                    cout << Game.voice(13, narratorName) << endl;
                                    sleep(1);
                                    cout << Game.voice(14, narratorName) << endl;
                                } else {
                                    cout << Game.voice(15, narratorName);
                                    monster.summon(enemy, "ALGOR WINDSLAYER", "fire", "200", "15", "20");
                                }
                            }
                        }
                    } else if (randm > 70 && randm < 100) {

                    } else if (randm > 50 && randm < 71) {

                    }
                    string command;
                    cin >> command;
                    if (command == "/damage") {
                        Game.danger();
                        cout << Game.voice(0, narratorName) << endl;
                        Game.damage(5);
                    } else if (command == "/health") {
                        cout << narratorName + "Your health is: " + Game.health() << endl;
                    } else if (command == "/summon") {
                        cout << narratorName + "What is the Name you wish to give to this foe? " << endl;
                        string name;
                        cin >> name;
                        cout << narratorName + "What is the Element you wish to give to this foe?(fire, water, earth, air) " << endl;
                        string element;
                        cin >> element;
                        cout << narratorName + "What is the Health you wish to give to this foe?(1-20) " << endl;
                        string health;
                        cin >> health;
                        cout << narratorName + "What is the Power you wish to give to this foe?(1-20) " << endl;
                        string power;
                        cin >> power;
                        cout << narratorName + "What is the Level you wish to give to this foe?(1-20)" << endl;
                        string level;
                        cin >> level;
                        monster.summon(enemy, name, element, health, power, level);
                    }
                }
            }

        } else {
            cout << "Enter valid answer" << endl;
            //cout << Game.danger() << endl;
            //cout << Game.health();
        }
    }


    return 0;
}
/*


cout << "" << endl;


 */