#include<iostream>
#include<iomanip> // for setprecision
using namespace std;

int main() {
    double x = 21.5382;
    cout << fixed << setprecision(2) << x << '\n'; // prints 21.54 (notice the rounding), it was supposed to print 21.53 but as the next digit is 8, it rounds up to 4

    cout << fixed << setprecision(10) << x << '\n'; // prints 21.5382000000 (notice the trailing zeros), so it will print EXACTLY 10 digits after the decimal point, if there aren't enough digits, then it will add trailing zeros

    return 0;
}