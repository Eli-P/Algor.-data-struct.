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

void Game::damage(int amount) {
    heal -= amount;
}

string Game::voice(int speech, string narratorName) {
    if (speech == 0) {
        return narratorName + " Monster!";
    }else if(speech == 1){
        return narratorName + " Sometimes I wonder...";
    }else if(speech == 2){
        return narratorName + " There is a door in front of you, do you choose to enter? ";
    }else if(speech == 3){
        return narratorName + " And you enter aaannnddd......";
    }else if(speech == 4){
        return narratorName + " Nothing..... just nothing..... congrats an empty room! there are two doors. ";
    }else if(speech == 5){
        return narratorName + " All you see is a large chest. ";
    }else if(speech == 6){
        return narratorName + " All you see is a chest. ";
    }else if(speech == 7){
        return narratorName + " All you see is a small chest. ";
    }else if(speech == 8){
        return narratorName + " You walk in and hear a small squeak..... nice. ";
    }else if(speech == 9){
        return narratorName + " You walk in and hear a growl....  hope your ready. ";
    }else if(speech == 10){
        return narratorName + " You walk in and see a Silhouette of a Massive creature and get hit with the force of its ear splitting roar..... \n have fun..... I would wish you luck but fate seems to be against you.... ";
    }else if(speech == 11){
        return narratorName + " Cool! you find yourself in a eight sided room but its empty, still a cool room. ";
    }else if(speech == 12){
        return narratorName + " You find a dead end... whoopee. ";
    }else if(speech == 13){
        return narratorName + " BOSS CHAMBER!! BOSS CHAMBER!! ";
    }else if(speech == 14){
        return narratorName + " HA HA HA HA .... Did I get you? he he he, there is one door in front of you. ";
    }else if(speech == 15){
        return narratorName + " Well..... um...... here is the boss.... Good luck? ";
    }else if(speech == 16){
        return narratorName + " See you later! ";
    }
}
enemies power;
string Game::Door(int doorNumber, string narratorName) {
    return narratorName + " There are " + power.int_to_string(doorNumber) + " doors";
}




