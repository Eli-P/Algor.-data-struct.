//
// Created by Eli Palmer on 2020-01-03.
//

#ifndef TESTPROJECT_GAME_H
#define TESTPROJECT_GAME_H

#include <iostream>
using namespace std;

class Game {
private:
    size_t heal = 20;
    string hp = "20";
public:
    string danger();
    string health();
    string HP();
    string narrator(int);
};


#endif //TESTPROJECT_GAME_H
