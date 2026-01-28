#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int x = __builtin_popcount(n);
  // for (int i = 0; i <= n; i++) { // O(n)
  //   if (__builtin_popcount(i) == x) {
  //     cout << i << '\n';
  //     return 0;
  //   }
  // }
  cout << ((1 << x) - 1) << '\n';
  return 0;
}
// O(1)