#include <iostream>
#include <string.h> // For strlen function
using namespace std;

int main() {
    // Step 1: Take input
    char str[100];
    cin >> str; // Read the string
    int n = strlen(str);   // Get the length of the string

    // Step 2: Declare another temporary array 'reversed' of size 'n+1'
    char reversed[n + 1];  // +1 for the null character

    // Step 3: Copy each character of 'str' to 'reversed' in reverse order
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        reversed[j] = str[i];
        j++;
    }
    reversed[n] = '\0'; // Add the null character at the end

    // Step 4: Copy the reversed string 'reversed' back to 'str'
    for (int i = 0; i < n; i++) {
        str[i] = reversed[i];
    }
    // str already contains the null character at the end, so no need to add it again

    // Step 5: Print the reversed string
    cout << "Reversed string: " << str << '\n';
    return 0;
}
