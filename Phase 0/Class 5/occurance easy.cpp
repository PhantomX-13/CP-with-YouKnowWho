#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int a[6] = {1, 2, 2, 9, 1, 1}; // using an example array, you can take the array as input

    // loop through the numbers from 1 to 10
    for (int number = 1; number <= 10; number++) {
        // count how many times the current number occurs in the array
        int number_count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == number) {
                number_count++;
            }
        }
        cout << number << " occurs "  << number_count << " times\n";
    }
    return 0;
}