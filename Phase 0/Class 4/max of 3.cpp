#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) { // if a is greater than or equal to both b and c
        cout << "The largest number is: " << a << '\n';
    } else if (b >= a && b >= c) { // if b is greater than or equal to both a and c
        cout << "The largest number is: " << b << '\n';
    } else { // otherwise...
        cout << "The largest number is: " << c << '\n';
    }

    return 0;
}
