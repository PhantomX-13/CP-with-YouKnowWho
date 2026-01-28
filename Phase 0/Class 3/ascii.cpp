#include <iostream>
using namespace std;

int main() {
    char ch = 'd';
    int ascii = (int)ch; // Casting character 'd' to its ASCII value
    cout << "The ASCII for the character 'd' is = " << ascii << '\n'; // Output: ASCII value of 'd'

    char back_to_char = (char)ascii; // Casting back to character
    cout << "Converting back to char = " << back_to_char << '\n'; // Output: 'd'
    return 0;
}