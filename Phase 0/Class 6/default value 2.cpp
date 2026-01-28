#include <iostream>
using namespace std;

// Function with default arguments
int add(int a, double b, int c = 10, double d = 20.5) {
    return a + b + c + d;
}

int main() {
    cout << add(10, 20.5) << '\n';        // Uses default values for c and d
    cout << add(10, 20.5, 30) << '\n';    // Uses default value for d
    cout << add(10, 20.5, 30, 40.5) << '\n';    // Overrides default values for c and d
    return 0;
}