#include<iostream>
using namespace std;

int x = 10; // Global variable

void yo() {
    cout << x << '\n'; // Can access the global variable 'x'
}

int main() {
    cout << x << '\n'; // Can access the global variable 'x'
    yo();
    return 0;
}