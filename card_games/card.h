//
// Created by Eli Palmer on 2019-09-06.
//

#ifndef CARD_GAMES_CARD_H
#define CARD_GAMES_CARD_H

#include <iostream>

enum Csuit {Heart,Spade,Diamond,Club};
enum Crank {Ace=14,two=2,three=3,four=4,five=5,six=6,seven=7,eight=8,nine=9,ten=10,Jack=11,Queen=12,King=13};

class Card {
private:
    Crank rank;
    Csuit suit;
    int value;
public:
    //Constructures
    Card()= default;
    Card(Crank,Csuit,int);
    //Getters
    std::string getrank() const;
    std::string getsuit() const;
    int getvalue() const;
    //Setters
    //printDeck();
    void setrank(Crank);
    void setsuit(Csuit);
    void setvalue(int);
};
//Overloading
bool operator ==(const Card& c1, const Card& c2);
bool operator >(const Card& c1, const Card& c2);
std::ostream& operator <<(std::ostream& out, const Card &c1);

#endif //CARD_GAMES_CARD_H
