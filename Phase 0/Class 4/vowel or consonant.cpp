#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a lowercase character: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "The character '" << ch << "' is a vowel.\n";
    } else {
        cout << "The character '" << ch << "' is a consonant.\n";
    }

    return 0;
}
