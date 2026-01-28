#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char name[100];
    for (int i = 0; i < n; i++) {
        cin.getline(name, 100);
        cout << name << '\n';
    }
    return 0;
}