#include <iostream>
#include "Game.h"
#include <stdlib.h>
#include <zconf.h>

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    double x = 8;
    double y = 3;
    string narratorName = "";
    Game Game;
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
                    cout << Game.narrator(1) << "[" << narratorName << "]" << endl;
                    sleep(2);
                    done = 1;
                    cout << "To prove I am nice ask me ANY question and I will answer." << endl;
                    string answer = "";
                    cin >> answer;
                    if (rand()%2+1 == 1){
                        cout << Game.narrator(3) << endl;
                    }else{
                        cout << Game.narrator(4) << endl;
                    }
                }
            }
            cout << "your starting health: " << Game.health() << endl;
            bool alive = true;
            while (alive) {
                if (Game.health() == "0") {
                    alive = false;
                    cout << "You Died.... " << endl;
                    et = false;
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