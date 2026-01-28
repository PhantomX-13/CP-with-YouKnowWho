#include <iostream>
using namespace std;

int main() {
    // Step 1: Take input
    int n, a[n];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input each element
    }

    // Step 2: Declare another temporary array 'b' of size 'n'
    int b[n];

    // Step 3: Copy each element of 'a' to 'b' in reverse order
    int j = 0;
    for (int i = n - 1; i >= 0; i--) { // iterate over the indices of 'a' in reverse order
        b[j] = a[i];
        j++;
    }

    // Step 4: Copy the reversed array 'b' back to 'a'
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }

    // Step 5: Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << a[i] << '\n';
    }
    return 0;
}
