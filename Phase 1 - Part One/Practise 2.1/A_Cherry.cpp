#include<iostream>
using namespace std;

// check the editorial of the problem
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    long long ans = 0;
    for (int i = 1; i < n; i++) {
      ans = max(ans, 1LL * a[i] * a[i + 1]);
      // ans = max(ans, (long long) * a[i] * a[i - 1]); // same
    }
    cout << ans << '\n';
  }
  return 0;
}
// Time: O(n)
// Space: O(n)