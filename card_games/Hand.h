//
// Created by Eli Palmer on 2019-09-24.
//

#ifndef CARD_GAMES_HAND_H
#define CARD_GAMES_HAND_H

#include "card.h"
#include <vector>
using namespace std;

class Hand {
private:
    vector<Card> hand;

public:
    Hand()=default;
    vector<Card> getHand() const;
    void arrangeHand();
    void printHand();
    vector<Card> discard(int);
    void addCards(vector<Card>);
    int count();
    bool isEmpty();
};


#endif //CARD_GAMES_HAND_H
