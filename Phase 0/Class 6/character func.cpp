#include<iostream>
using namespace std;

int main() {
    char x = 'A', y = 'a', z = '1';
    cout << "Is " << x << " uppercase? " << isupper(x) << '\n'; // prints 1 (true)
    cout << "Is " << y << " lowercase? " << islower(y) << '\n'; // prints 1 (true)
    cout << "Is " << z << " a digit? " << isdigit(z) << '\n'; // prints 1 (true)
    cout << "Is " << x << " an alphabet? " << isalpha(x) << '\n'; // prints 1 (true)
    cout << "Is " << z << " an alphabet? " << isalpha(z) << '\n'; // prints 0 (false)
    cout << "Uppercase of " << y << ": " << (char)toupper(y) << '\n'; // prints A
    cout << "Lowercase of " << x << ": " << (char)tolower(x) << '\n'; // prints a
    return 0;
}