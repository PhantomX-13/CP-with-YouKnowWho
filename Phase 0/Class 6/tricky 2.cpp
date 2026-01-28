#include<iostream>
using namespace std;

int x; // Global variable

void yo() {
    int x = 20; // Local variable 'x' shadows the global variable 'x', by shadowing we mean that in this function, 'x' refers to the local variable 'x' and not the global variable 'x'
    cout << x << '\n'; // Prints the local 'x'
}

int main() {
    x = 10; // Modifies the global variable 'x'
    yo();
    cout << x << '\n'; // Prints the global 'x', which remains unchanged by 'yo()'
    return 0;
}