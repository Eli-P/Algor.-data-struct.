//
// Created by Eli Palmer on 2020-01-14.
//

#ifndef TESTPROJECT_ENEMIES_H
#define TESTPROJECT_ENEMIES_H

#include <iostream>
#include <vector>
using namespace std;

class enemies {
private:
    string level = "1";
    string health = "0";
    string power = "0";
    string name = "";
    string element = "neutral";
    vector<string> lvl5names = {"squeakers", "fuzzy", "monsoonling", "cracker", "botline", "mutter"};
    vector<string> lvl10names = {"Gruff", "Oinslinger", "Howler", "Blayn", "Beautler", "Erack"};
    vector<string> lvl15names = {"Andor Muzzler", "Power Node", "Blade Reaper", "Sanitor", "Edge Night", "Needler", "Haxmoor", "Seeker Baldes", "World Madder", "Knight of Wren", "Blasterd", "Feternyl", "Darvor", "Syren", "Shard of Darkness", "Hunters", "Artemis", "Dackter", "Were Master", "Fiend of Light", "Advents Bane"};
public:
    void summon (vector<string> enemy, string name, string element, string power, string health, string level);
    string int_to_string(int num);
    void Monster (vector<string> enemy, int difficulty);

};


#endif //TESTPROJECT_ENEMIES_H
