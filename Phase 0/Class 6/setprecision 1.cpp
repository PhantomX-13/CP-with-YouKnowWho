#include<iostream>
#include<iomanip> // for setprecision
using namespace std;

int main() {
    double x = 1.2345123421212;
    cout << fixed << setprecision(8) << x << '\n'; // prints 1.23451234
    return 0;
}