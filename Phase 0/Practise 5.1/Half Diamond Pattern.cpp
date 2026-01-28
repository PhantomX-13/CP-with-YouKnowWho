#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;

  // build the upper half, like the previous problem
  for (int line = 1; line <= n; line++) {
    int spaces = n - line;
    int stars = 2 * line - 1;
    for (int i = 1; i <= spaces; i++) {
      cout << ' ';
    }
    for (int i = 1; i <= stars; i++) {
      cout << '*';
    }
    cout << '\n';
  }

  // now build the lower half
  // here, line number is defined from the bottom
  // so line = 1 means the lowest line
  for (int line = n - 1; line >= 1; line--) {
    int spaces = n - line;
    int stars = 2 * line - 1;
    for (int i = 1; i <= spaces; i++) {
      cout << ' ';
    }
    for (int i = 1; i <= stars; i++) {
      cout << '*';
    }
    cout << '\n';
  }

  // question: why did we start from n - 1 in the second loop?
  return 0;
}