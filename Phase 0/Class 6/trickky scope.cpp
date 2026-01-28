#include<iostream>
using namespace std;

int x; // Global variable

void yo() {
    x = 20; // Modifies the global variable 'x'
    cout << x << '\n'; // Prints the modified value of 'x'
}

int main() {
    x = 10; // Modifies the global variable 'x'
    yo();
    cout << x << '\n'; // Prints the modified value of 'x'
    return 0;
}