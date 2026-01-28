#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }

    for (int l = 1; l <= n; l++) { // left endpoint of the subarray
      for (int r = l; r <= n; r++) { // right endpoint of the subarray, should be >= l

        int maximum = -1e6; // should be <= -10^5 as in the problem -10^5 <= a[i] <= 10^5
        // the subarray contains indices from l to r
        for (int i = l; i <= r; i++) {
          maximum = max(maximum, a[i]);
        }
        cout << maximum << ' ';

      }
    }
    cout << '\n';
  }
  return 0;
}