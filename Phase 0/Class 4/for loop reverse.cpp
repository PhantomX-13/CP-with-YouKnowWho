#include<iostream>
using namespace std;
int main()
{
    for (int i = 10; i >= 1; i--) {
        cout << i << '\n';
    }
    // so as long as i is greater than or equal to 1, it executes the body of the loop
    // and after each iteration, it decreases i by 1
    return 0;
}