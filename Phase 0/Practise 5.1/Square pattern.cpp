#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  for (int row = 1; row <= n; row++) {
    for (int column = 1; column <= n; column++) {
      if (row == 1 || row == n || column == 1 || column == n) {
        cout << '*'; // print * if we are at the boundary
      }
      else {
        cout << ' '; // otherwise print space
      }
    }
    cout << '\n'; // Move to the next line after completing a row
  }
  return 0;
}