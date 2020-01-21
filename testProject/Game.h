//
// Created by Eli Palmer on 2020-01-03.
//

#ifndef TESTPROJECT_GAME_H
#define TESTPROJECT_GAME_H

#include <iostream>
#include <vector>
#include "enemies.h"
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
    void damage(int amount);
    string voice(int, string);
    string Door(int doorNumber, string narratorName);
};


#endif //TESTPROJECT_GAME_H
