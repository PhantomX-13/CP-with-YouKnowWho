#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  for (int row = 1; row <= n; row++) {
    for (int i = 1; i <= row; i++) {
      cout << "*";
    }
    cout << '\n';
  }
  return 0;
}
// Time: O(n^2)
// Space: O(1)