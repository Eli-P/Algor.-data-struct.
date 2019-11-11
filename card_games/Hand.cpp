//
// Created by Eli Palmer on 2019-09-24.
//


#include "Hand.h"

void Hand::arrangeHand() {
    sort(hand.begin(), hand.end(), [](const Card& lhs, const Card& rhs){
        return (lhs.getsuit() > lhs.getsuit());
    });
}
void Hand::printHand() {
    int i = 0;
    if (isEmpty()){
        cout << " I am Out!" << endl;
    } else {
        for (Card card : hand) {
            cout << i << ") "<< card.getrank() << " of " << card.getsuit() << "'s" << endl;
            i++;
        }
    }


}
vector<Card> Hand::discard(int i) {
    vector<Card> temp;
    if (i <= hand.size()-1 && i >= 0) {
        //cout << hand[i] << endl;
        temp.push_back(hand[i]);
        hand.erase(hand.begin() + i);
    }
}
void Hand::addCards(vector<Card> temp) {
    hand.insert(hand.end(), temp.begin(), temp.end());
}

int Hand::count() {
    return hand.size();
}

vector<Card> Hand::getHand() const {
    return hand;
}

bool Hand::isEmpty() {
    if (hand.size()==0){
        return true;
    } else {
        return false;
    }
}


