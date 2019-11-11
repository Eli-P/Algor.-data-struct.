#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "War.h"

using namespace std;
int total = 0;
int main() {

    std::cout << "\"Card Game Haven!\"" << std::endl;
    std::cout << "Initializing" << std::endl;

    Deck d1;
    d1.shuffle();
    cout << boolalpha;
    cout << "Card 1 : " << d1.getdeck()[0] << "Card 2 : " << d1.getdeck()[1] << endl;
    cout << "Is card 1 == to card 2? " << (d1.getdeck()[0] == d1.getdeck()[0]) << endl;
    cout << "Is card 1 > card 2? " << (d1.getdeck()[0] > d1.getdeck()[0]) << endl;


    vector<Hand> players;

    int numPlayers =0;

    while (! (numPlayers>=2 && numPlayers <26)){
        cout << "how many Players? ";
        cin >> numPlayers;
    }
    //give players their cards
    for (int i = 0; i < numPlayers; ++i){
        Hand temp;
        players.push_back(temp);
    }

    int h = 0;
    while (!d1.getdeck().empty()){
        vector<Card> temp = d1.deal(1);
        players[h].addCards(temp);
        h++;
        if (h >= numPlayers){
            h = 0;
        }

    }
    h = 0;
    for (Hand hand: players){
        cout << "Hand " << h << " has " << hand.count() << " cards" << endl;
        //hand.arrangeHand();
        //hand.printHand();
        h++;
    }

    //testing testing 1 2 3
    //players[0].hand.



    while (players.size() > 1){
        Hand temp;
        int maxDeck = 0;
        int maxValue = 0;

        for (int j = 0; j < players.size(); ++j) {
            if(!players[j].isEmpty()) {
                //cout << Hand.printHand() << endl;

                cout << "Player " << j << " plays: " << endl;
                temp.addCards(players[j].discard(0));
                if (temp.getHand()[j].getvalue() > maxValue) {
                    maxDeck = j;
                    maxValue = temp.getHand()[j].getvalue();
                }
            }
        }
        players[maxDeck].addCards(temp.getHand());
        int count = 0;
        for (Hand player:players){
            cout << "Player "<<count << "'s hand: " << endl;
            player.printHand();
            count++;
        }
        for (u_long i = players.size()-1; i <= 0; --i){
            if (players[i].getHand().size() == 0){
                players.erase(players.begin() + i);
            }
        }

        char ans = 'z';
        while (ans != 'y'){
            if (ans == 'n'){

            }
            cout << endl << endl << "Next round? (y/n) ";
            cin >> ans;
        }

    }

    //possible programming code
    /*
    int winner = 0;
    int tie = 0;
    int Tie = 0;



     */

    //cout << numPlayers;

    /*

    std::cout << "Done!" << std::endl;

    vector<Hand> hands;
    for (int i = 0; i < 5; ++i){
        Hand temp;
        hands.push_back(temp);
    }
    //shuffle


    int h = 0;
    while (!d1.getdeck().empty()){
        vector<Card> temp = d1.deal(1);
        hands[h].addCards(temp);
        h++;
        if (h > 4){
            h = 0;
        }

    }
    h = 0;
    for (Hand hand: hands){
        cout << "Hand " << h << endl;
        hand.arrangeHand();
        hand.printHand();
        h++;
    }
    //if ()

    */


    //Card firstCard(Crank::Ace,Csuit::Diamond,1);

    //cout << firstCard.getrank() << " of " << firstCard.getsuit() << "'s " << endl;

    return 0;
}