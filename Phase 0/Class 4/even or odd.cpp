#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The number " << n << " is even.\n";
    } else {
        cout << "The number " << n << " is odd.\n";
    }

    return 0;
}
