#include<iostream>
using namespace std;

void yo() {
    int x = 10; // Local variable
}

int main() {
    yo();
    // cout << x << '\n'; // Error: 'x' is not accessible here
    return 0;
}