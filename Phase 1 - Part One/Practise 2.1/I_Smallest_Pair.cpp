#include<iostream>
using namespace std;

// set an infinity variable which in our case means a sufficiently large value
// declare it as const and use it in the code
const int inf = 1e9; // = 10^9 = 1000000000
// tips: [x]e[y] means x * 10^y, so 5e9 means 5 * 10^9
// 1e9 means 1 * 10^9 = 10^9
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    int ans = inf;
    for (int i = 1; i <= n; i++) { // loop over all i
      for (int j = i + 1; j <= n; j++) { // start j from i + 1, as i < j
        ans = min(ans, a[i] + a[j] + j - i); // just do what the problem said
      }
    }
    cout << ans << '\n';

    // inf should be >= a[i] + a[j] + j - i,
    // in our problem a[i], a[j] <= 10^6 and 1 <= i < j <= n <= 100
    // so inf should be >= 10^6 + 10^6 + 100 - 1 (the maximum value that can be)
    // so setting up inf = 2000099 is enough
    // for being safe, we declared it as 10^9
    // note that understanding these little stuff are REALLY important
  }
  return 0;
}