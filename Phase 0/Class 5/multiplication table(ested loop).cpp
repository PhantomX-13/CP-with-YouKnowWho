#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; number++) {
        // we need to print the multiplication table for this number
        // let's use a loop to do it and separate the numbers by a space
        cout << number << ": ";
        for (int i = 1; i <= 10; i++) {
            cout << number * i << ' ';
        }
        cout << '\n'; // print each table in a new line
    }
    return 0;
}