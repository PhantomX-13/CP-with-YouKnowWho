#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double result = pow(2.3, 4.5);
    cout << "2.3 raised to 4.5: " << result << '\n'; // prints 42.44

    int x = pow(5, 3);
    cout << "5 to the power of 3: " << x << '\n'; // prints 125

    x = round(pow(2, 20)); // if you want to use the pow function to calculate the power of integers, then it is a good practice to round the result. Why? We will learn that in Phase 1.
    cout << "2 to the power of 20: " << x << '\n'; // prints 1048576
    return 0;
}