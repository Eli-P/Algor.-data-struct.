//
// Created by Eli Palmer on 2019-09-26.
//

#ifndef CARD_GAMES_WAR_H
#define CARD_GAMES_WAR_H

#include "card.h"
#include "Hand.h"
#include <vector>

using namespace std;

class War {
private:

public:
    War()= default;
    void war();
    void playCard();
    void field();
    void collect();
};


#endif //CARD_GAMES_WAR_H
