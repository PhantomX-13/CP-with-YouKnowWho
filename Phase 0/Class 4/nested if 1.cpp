#include<iostream>
using namespace std;

int main() {
    int x = 3;

    if (x >= 0) { // condition is true
        cout << "x is at least 0\n"; // prints
        if (x >= 1) {
            cout << "x is at least 1\n"; // prints
        }
        else { // the x >= 1 condition is true, so this block is skipped
            cout << "x is less than 1\n"; // skipped
        }
    }
    else { // the x >= 0 condition is true, so this block is skipped
        cout << "x is less than 0\n"; // skipped
    }
    return 0;
}