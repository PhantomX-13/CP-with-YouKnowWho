#include <iostream>
using namespace std;

int main() {
    char a[] = "hello";
    cout << a << '\n'; // prints hello

    char b[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << b << '\n'; // prints hello

    char c[] = {'h', 'e', 'l', '\0', 'o', '\0'};
    cout << c << '\n';
    // prints hel
    // because it stops when it encounters the first null character

    char d[] = {'h', 'e', 'l', 'l', 'o'};
    cout << d << '\n';
    // prints hello (also prints garbage values after the last character)
    // because the null character is not present, so it prints garbage values after the last character

    char e[] = "hello";
    cout << e << '\n';
    // prints hello (works fine)
    // because if you use a string literal to initialize a char array, it appends the null character automatically

    return 0;
}