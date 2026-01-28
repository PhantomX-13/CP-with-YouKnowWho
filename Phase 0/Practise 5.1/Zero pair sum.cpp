#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0; // stores the number of pairs
  // fix the first index of the pair
  for (int i = 0; i < n; i++) {
    // fix the second index of the pair
    // start from i + 1, because we want j > i
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == 0) {
        cnt++;
      }
    }
  }
  cout << cnt << '\n';
  return 0;
}