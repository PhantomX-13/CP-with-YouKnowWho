#include <iostream>
using namespace std;

// Function with one integer parameter
void print(int i) {
    cout << "Integer: " << i << endl;
}

// Overloaded function with one double parameter
void print(double d) {
    cout << "Double: " << d << endl;
}

// Overloaded function with two integer parameters
void print(int i, int j) {
    cout << "Two Integers: " << i << ", " << j << endl;
}

int main() {
    print(5);         // Calls the first function
    print(5.5);       // Calls the second function
    print(5, 10);     // Calls the third function
    return 0;
}