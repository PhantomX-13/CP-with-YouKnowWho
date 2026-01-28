#include<iostream>
#include <string.h>
using namespace std;

const int N = 1005;
char s[N];
int main() {
  cin >> s;
  int len = strlen(s);
  // for example for s = "abba", len = 4,
  // so 0th and 3rd char should be equal
  // 1st and 2nd char should be equal
  // so when len = 7, then the indices are
  // [0, 1, 2, 3, 4, 5, 6] = normal order
  // [6, 5, 4, 3, 2, 1, 0] = reverse order
  // but normal order and reverse order should be equal
  // for s[i] should be equal to s[len - i - 1]
  for (int i = 0; i < len; i++) {
    int j = len - i - 1;
    if (s[i] != s[j]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}