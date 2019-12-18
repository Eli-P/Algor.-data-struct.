#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    double x = 8;
    double y = 3;

    cout << "8 * 3 = " << x*y << endl;
    cout << "is there anything else? y/n" << endl;
    char ans;
    string clear;
    cin >> ans;
    cin >> clear;
    if (ans == 'y'){

    } else if (ans == 'n'){
        cout << "he he he he" << endl;
    } else {
        cout << "Enter valid answer" << endl;
    }



    return 0;
}