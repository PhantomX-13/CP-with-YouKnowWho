#include <iostream>
using namespace std;

int main() {
    int n = 89;
    int binary[100]; // to store the binary representation
    int i = 0; // to keep track of the index of the binary array
    while (n > 0) {
        binary[i] = n % 2; // get the remainder
        n = n / 2; // get the quotient
        i++; // increment the index
    }
    // now the binary array contains the binary representation of the number in reverse order
    // so we need to print it in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << '\n';
    return 0;
}