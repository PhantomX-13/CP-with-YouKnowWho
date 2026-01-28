#include<iostream>
using namespace std;

int main() {
    int x = 3;

    if (x >= 0) { // condition is true
        cout << "x is at least 0\n"; // prints
        if (x >= 1) {
            cout << "x is at least 1\n"; // prints
            if (x >= 2) {
                cout << "x is at least 2\n"; // prints
                if (x >= 3) {
                    cout << "x is at least 3\n"; // prints
                    if (x >= 4) { // condition is false
                        cout << "x is at least 4\n"; // skipped
                    }
                    else {
                        cout << "x is less than 4\n"; // prints
                    }
                }
                else {
                    cout << "x is less than 3\n"; // skipped
                }
            }
            else {
                cout << "x is less than 2\n"; // skipped
            }
        }
        else {
            cout << "x is less than 1\n"; // skipped
        }
    }
    else {
        cout << "x is less than 0\n"; // skipped
    }
    return 0;
}