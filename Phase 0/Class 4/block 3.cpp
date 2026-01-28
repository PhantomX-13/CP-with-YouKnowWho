#include<iostream>
using namespace std;

int main() {
    int x = 2;
    {
        int x = 3; // a different variable
        cout << "x = " << x << '\n'; // prints 3
    }
    cout << "x = " << x << '\n'; // prints 2
    return 0;
}