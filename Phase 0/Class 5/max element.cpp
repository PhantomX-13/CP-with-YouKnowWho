#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 40, 30, 70, 50};
    int max_element = a[0]; // Assume the first element is the largest

    // Loop through the array to find the largest number
    for (int i = 1; i < 5; i++) {
        if (a[i] > max_element) { // If the current element is larger than the largest element
            max_element = a[i]; // Then update the largest element
        }
    }

    cout << "The largest number in the array is " << max_element << endl;
    return 0;
}
