#include <iostream>
using namespace std;

int main() {
    int age[5];
    for (int i = 0; i < 5; i++) { // take 5 integers as input
        cin >> age[i];
    }
    for (int i = 0; i < 5; i++) { // print the array
        cout << age[i] << ' ';
    }
    cout << '\n';
    return 0;
}