#include <iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ' << a[4] << '\n'; // prints 10 20 30 40 50
    a[1] = 200;
    a[3] = 400;
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ' << a[4] << '\n'; // prints 10 200 30 400 50
    return 0;
}