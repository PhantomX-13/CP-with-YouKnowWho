#include <iostream>
using namespace std;

// Function with an integer parameter
void display(int i) {
    cout << "Integer: " << i << endl;
}

// Overloaded function with a double parameter
void display(double d) {
    cout << "Double: " << d << endl;
}

int main() {
    display(10);    // Calls the integer version
    display(10.5);  // Calls the double version
    return 0;
}