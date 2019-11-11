//
// Created by Eli Palmer on 2019-09-12.
//


#ifndef CARD_GAMES_DECK_H
#define CARD_GAMES_DECK_H

#include "card.h"
#include <algorithm>
#include <chrono>
#include <random>
using namespace std;

class Deck {
private:
    vector<Card> deck;
public:
    //Constructures
    Deck();
    Deck(vector<Crank>,vector<Csuit>);
    //Getters
    void shuffle();
    vector<Card> deal(int);
    void reset();
    //Setters
    vector<Card> getdeck() const;
    void printDeck() const;
};


#endif //CARD_GAMES_DECK_H
