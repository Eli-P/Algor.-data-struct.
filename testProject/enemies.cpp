//
// Created by Eli Palmer on 2020-01-14.
//

#include "enemies.h"

void enemies::summon(vector<string> enemy, string name, string element, string power, string health, string level) {
    enemy.push_back(name);
    enemy.push_back(element);

    enemy.push_back(power);
    enemy.push_back(health);
    enemy.push_back(level);
}

string enemies::int_to_string(int num) {
    int heal = num;
    string hp;
    if (heal == 20){
        hp = "20";
    } else if (heal == 19){
        hp = "19";
    } else if (heal == 18){
        hp = "18";
    } else if (heal == 17){
        hp = "17";
    } else if (heal == 16){
        hp = "16";
    } else if (heal == 15){
        hp = "15";
    } else if (heal == 14){
        hp = "14";
    } else if (heal == 13){
        hp = "13";
    } else if (heal == 12){
        hp = "12";
    } else if (heal == 11){
        hp = "11";
    } else if (heal == 10){
        hp = "10";
    } else if (heal == 9){
        hp = "9";
    } else if (heal == 8){
        hp = "8";
    } else if (heal == 7){
        hp = "7";
    } else if (heal == 6){
        hp = "6";
    } else if (heal == 5){
        hp = "5";
    } else if (heal == 4){
        hp = "4";
    } else if (heal == 3){
        hp = "3";
    } else if (heal == 2){
        hp = "2";
    } else if (heal == 1){
        hp = "1";
    } else if (heal == 0){
        hp = "0";
    }
    return hp;
}

void enemies::Monster (vector<string> enemy, int difficulty) {
    int randm = rand()% 5 + 1;
    string name;
    string element;
    string power;
    string health;
    string level;
    if (difficulty < 6){

    }
    enemy.push_back(name);
    enemy.push_back(element);

    enemy.push_back(power);
    enemy.push_back(health);
    enemy.push_back(level);
}
