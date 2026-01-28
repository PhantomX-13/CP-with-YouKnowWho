#include<iostream>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, l, r, x; cin >> n >> l >> r >> x;
  int c[n];
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  int ways = 0;
  for (int mask = 0; mask < (1 << n); mask++) {
    int total_difficulty = 0, min_difficulty = 1e9, max_difficulty = 0, problem_count = 0;
    for (int i = 0; i < n; i++) {
      if ((mask >> i) & 1) {
        total_difficulty += c[i];
        min_difficulty = min(min_difficulty, c[i]);
        max_difficulty = max(max_difficulty, c[i]);
        problem_count++;
      }
    }
    if (total_difficulty >= l and total_difficulty <= r
      and max_difficulty - min_difficulty >= x and problem_count >= 2) {
      ways++;
    }
  }
  cout << ways << '\n';
  return 0;
}