#include<iostream>
using namespace std;

int main() {
    int x = 2;
    cout << "x = " << x << '\n'; // prints 2
    int x = 4; // Error: redeclaration of 'int x'
    return 0;
}