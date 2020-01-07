//
// Created by Eli Palmer on 2020-01-03.
//

#include "Game.h"

string Game::danger() {
    return "Danger!";
}

string Game::health() {
    return HP();
}

string Game::HP() {
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

string Game::narrator(int dialog) {
    if (dialog == 0){
        return "hello I am the narrator would you like to give me name? (y/n): ";
    }else if (dialog == 1){
        return "Ok my name is now: ";
    }else if (dialog == 2){
        return "Ok I will stick with [Narrator]";
    }else if (dialog == 3){
        return "Uhhh...... no";
    }else if (dialog == 4){
        return "Honestly? um.. yes";
    }
}


