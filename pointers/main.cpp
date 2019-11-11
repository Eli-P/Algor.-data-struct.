#include <iostream>
#include <vector>
using namespace std;

int main() {

    int *int_ptr;
    int i = 42;
    int_ptr = &i;
    int *int_ptr2 = int_ptr;
    int inpt;
    int *arr;

    cout << "Hello give me a random int" << endl << endl;
    cin >> inpt;

    arr = new int[inpt];

    for (int j = 0; j < inpt; j++){
        arr[j] = j;
    }

    for (int j = 0; j < inpt; j++){
        cout << arr[j] << endl;
    }



    cout << *int_ptr << endl << endl;
    cout << int_ptr2 << endl;

    cout << int_ptr << endl << endl;
    //std::cout << "Hello, World!" << std::endl;

    delete [ ] arr;
    return 0;
}