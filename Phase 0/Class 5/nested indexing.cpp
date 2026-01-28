#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 1, 4, 0, 3};
    int b[8] = {3, 7, 4, 2, 1, 6, 0, 5};
    int x = a[b[2]]; // b[2] = 4, so a[b[2]] = a[4] = 3, so x = 3
    int y = b[a[0]]; // a[0] = 2, so b[a[0]] = b[2] = 4, so y = 4
    int z = a[b[a[4]]]; // a[4] = 3, so b[a[4]] = b[3] = 2, so a[b[a[4]]] = a[b[3]] = a[2] = 4, so z = 4
    cout << "x = " << x << '\n'; // prints 3
    cout << "y = " << y << '\n'; // prints 4
    cout << "z = " << z << '\n'; // prints 4

    // int w = a[b[1]]; // b[1] = 7, so a[b[1]] = a[7], but the size of 'a' is 5, so this will lead to undefined behavior
    return 0;
}
