#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double root = sqrt(25.35);
    cout << "Square root of 25.35: " << root << '\n'; // prints 5.03488

    int r = sqrt(25);
    cout << "Square root of 25: " << r << '\n'; // prints 5

    double t = cbrt(8.8);
    cout << "Cube root of 8.8: " << t << '\n'; // prints 2.06456
    return 0;
}