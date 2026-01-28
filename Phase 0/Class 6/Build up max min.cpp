#include<iostream>
using namespace std;

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a = 10, b = 20;
    cout << max(a, b) << '\n'; // prints 20
    cout << min(a, b) << '\n'; // prints 10
    return 0;
}