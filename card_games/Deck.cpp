//
// Created by Eli Palmer on 2019-09-12.
//

#include "Deck.h"
Deck::Deck() {
    for (int suit = 0; suit < 4; ++suit) {
        Card temp;
        temp.setsuit(Csuit(suit));

        for (int rank = 1; rank < 14; ++rank) {
            temp.setrank(Crank(rank));


            if (Crank(rank) > 1){
                temp.setvalue(Crank(rank));
            } else {
                temp.setvalue(14);
            }
            deck.push_back(temp);
        }

    }
}
Deck::Deck(vector<Crank> ranks, vector<Csuit> suits) {
    for (Csuit suit : suits) {
        Card temp;
        temp.setsuit(suit);

        for (Crank rank : ranks) {
            temp.setrank(rank);
            deck.push_back(temp);
            //Check for ace and set values
            if (rank == 1){
                temp.setvalue(14);
            } else {
                temp.setvalue(rank + 1);
            }
        }

    }
}



void Deck::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));
}

vector<Card> Deck::deal(int numCards) {
    vector<Card> dealt;
    for (int i = 0; i < numCards; ++i){
        dealt.push_back(deck.back());
        deck.pop_back();
    }

    return dealt;
}

void Deck::reset() {
    //empty deck
    deck.clear();
    //fill deck
    for (int suit = 0; suit < 4; ++suit) {
        Card temp;
        temp.setsuit(Csuit(suit));

        for (int rank = 1; rank < 14; ++rank) {
            temp.setrank(Crank(rank));
            deck.push_back(temp);
        }

    }
}

vector<Card> Deck::getdeck() const {
    return deck;
}

void Deck::printDeck() const {
    for (Card card : deck){
        cout << card.getrank() << " of " << card.getsuit() << "'s " << endl;
    }
}


