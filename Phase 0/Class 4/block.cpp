#include<iostream>
using namespace std;
int main() { // outer block
    int x = 2;
    { // inner block
        int y = 3;
        cout << "y = " << y << '\n';
        cout << "x = " << x << '\n';
        x += 5;
    } // end of inner block
    cout << "x = " << x << '\n';
    return 0;
} // end of outer block
