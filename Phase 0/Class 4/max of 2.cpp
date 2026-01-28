#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a >= b) {
        cout << "The larger number is: " << a << '\n';
    } else {
        cout << "The larger number is: " << b << '\n';
    }

    return 0;
}
