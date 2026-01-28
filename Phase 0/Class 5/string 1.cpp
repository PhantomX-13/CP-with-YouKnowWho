#include <iostream>
using namespace std;

int main() {
    char greeting[] = "Hello, world!";
    // same as char greeting[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};

    // Using a loop to print each character
    for (int i = 0; greeting[i] != '\0'; i++) { // loop until the null character is encountered
        cout << greeting[i];
    }
    cout << endl;

    return 0;
}