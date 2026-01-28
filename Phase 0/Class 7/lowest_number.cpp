#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mn = 1e9; // 1e9 means 10^9
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i]);
    }
    cout << mn << ' ';
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) {
            cout << i + 1 << '\n';
            return 0; // we have found the first occurrence of the minimum value, so we can stop the program
        }
    }
}