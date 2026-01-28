#include<iostream>
using namespace std;
int main() { // outer block
    int x = 2;
    { // inner block
        int y = 3;
        cout << "y = " << y << '\n';
    }
    cout << "x = " << x << '\n';
    cout << "y = " << y << '\n'; // Error: 'y' is not declared in this scope
    return 0;
}