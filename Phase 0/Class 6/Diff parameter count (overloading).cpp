#include <iostream>
using namespace std;

// Function with one integer parameter
int sum(int a) {
    return a;
}

// Overloaded function with two integer parameters
int sum(int a, int b) {
    return a + b;
}

int main() {
    cout << sum(10) << '\n';      // Calls the first function
    cout << sum(10, 20) << '\n';  // Calls the second function
    return 0;
}