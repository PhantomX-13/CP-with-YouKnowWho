#include<iostream>
#include<algorithm> // for __gcd
using namespace std;

int main() {
    int a = 15, b = 20;
    // First, calculate the GCD
    int gcd = __gcd(a, b);

    // Then calculate the LCM
    int lcm = a * b / gcd;
    cout << "LCM of 15 and 20: " << lcm << '\n'; // Outputs 60
    return 0;
}