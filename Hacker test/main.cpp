#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int max;
    cin >> max;
    vector<int> arr;
    for (int i = 0; i < max; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    for (int i = max -1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}