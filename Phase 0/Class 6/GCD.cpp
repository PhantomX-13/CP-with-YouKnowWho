#include<iostream>
#include<algorithm> // for __gcd
using namespace std;

int main() {
    int a = 15, b = 20;
    cout << "GCD of 15 and 20: " << __gcd(a, b) << '\n'; // Outputs 5
    cout << "GCD of 12 and 18: " << __gcd(12, 18) << '\n'; // Outputs 6
    cout << "GCD of 5 and 7: " << __gcd(5, 7) << '\n'; // Outputs 1
    return 0;
}