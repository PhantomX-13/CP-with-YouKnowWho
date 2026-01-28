#include <iostream>
using namespace std;

// Function with default arguments
// If b is not provided, it will take the default value of 10
int add(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << add(20) << '\n';        // Uses default value for b
    cout << add(20, 30) << '\n';    // Overrides default value for b
    return 0;
}