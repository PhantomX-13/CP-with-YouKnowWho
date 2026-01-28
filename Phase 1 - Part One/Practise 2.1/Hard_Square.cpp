#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      if (row == 1 or row == n) {
        cout << "* ";
      }
      else if (col == 1 or col == n) {
        cout << "* ";
      }
      else {
        cout << "  ";
      }
    }
    cout << '\n';
  }
  return 0;
}
// Time: O(n^2)
// Space: O(1)