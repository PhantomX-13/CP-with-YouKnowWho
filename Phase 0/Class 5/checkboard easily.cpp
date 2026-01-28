#include <iostream>
using namespace std;

int main() {
    // Size of the checkerboard
    int n = 8;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Check if the sum of indexes is even or odd
            if ((i + j ) % 2 == 0) {
                cout << "X "; // Print X for even sum indexes
            } else {
                cout << "O "; // Print O for odd sum indexes
            }
        }
        cout << '\n'; // Newline at the end of each row
    }
    return 0;
}
