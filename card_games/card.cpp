//
// Created by Eli Palmer on 2019-09-06.
//

#include "card.h"

Card::Card(Crank _rank, Csuit _suit, int _value) {
    if (_rank > 0 && _rank < 14){
        rank = _rank;
    }
    if (_suit >= 0 && _suit <= 3){
        suit = _suit;
    }
    value = _value;
}

std::string Card::getrank() const {
    switch(rank){
        case 1:
            return "Ace";
            break;
        case 2:
            return "Two";
            break;
        case 3:
            return "Three";
            break;
        case 4:
            return "Four";
            break;
        case 5:
            return "Five";
            break;
        case 6:
            return "Six";
            break;
        case 7:
            return "Seven";
            break;
        case 8:
            return "Eight";
            break;
        case 9:
            return "Nine";
            break;
        case 10:
            return "Ten";
            break;
        case 11:
            return "Jack";
            break;
        case 12:
            return "Queen";
            break;
        case 13:
            return "King";
            break;
        default:
            return "error";
            break;
    }
}

std::string Card::getsuit() const {
    switch(suit){
        case 0:
            return "♡";
            break;
        case 1:
            return "♤";
            break;
        case 2:
            return "♢";
            break;
        case 3:
            return "♧";
            break;
        default:
            return "error";
            break;
    }
}

int Card::getvalue() const {
    return value;
}

void Card::setrank(Crank _rank) {
    rank = _rank;
}

void Card::setsuit(Csuit _suit) {
    suit = _suit;
}

void Card::setvalue(int _value) {
    value =_value;
}

bool operator==(const Card &c1, const Card &c2) {
    return c1.getvalue() == c2.getvalue();
}

bool operator>(const Card &c1, const Card &c2) {
    return c1.getvalue() > c2.getvalue();
}

std::ostream &operator<<(std::ostream &output, const Card &c1) {
    output << "Card: " << c1.getrank() << c1.getsuit() << " Value: " << c1.getvalue() << std::endl;
    return output;
}
