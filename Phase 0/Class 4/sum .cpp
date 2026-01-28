#include<iostream>
using namespace std;
int main()
{
    int n = 7;
    int i = 1;
    int sum = 0;
    while (i <= n) { // while i is less than or equal to n, execute the body of the loop
        sum += i; // add i to sum
        i++; // increment i by 1
    }
    cout << sum << '\n'; // Outputs the sum of numbers from 1 to 7 which is 28
    return 0;
}