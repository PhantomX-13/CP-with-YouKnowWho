#include <iostream>
using namespace std;

int main() {
    int n = 5; // used 5 for simplicity, but you can take it as input
    int age[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> age[i];
    }
    for (int i = 0; i < n; i++) {
        sum += age[i];
    }
    cout << sum << '\n';
    return 0;
}