#include<iostream>
using namespace std;

int main() {
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n <= 0 || m <= 0) {
            break;
        }
        if (n > m) {
            swap(n, m);
        }
        int sum = 0;
        for (int i = n; i <= m; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << '\n';
    }
    return 0;
}
