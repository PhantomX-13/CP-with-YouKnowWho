#include<iostream>
#include <string.h>
using namespace std;

const int N = 1e5 + 9;
char s[N];

int main() {
  int test_cases; cin >> test_cases;
  while (test_cases--) {
    cin >> s;
    int len = strlen(s);
    bool is_good = false;
    for (int i = 0; i < len; i++) {
      // check if the next three characters are 010
      // note that we must check if i + 2 < len otherwise we will try to access indices that are not inside the string
      // so be careful
      // for example, when s = "11110" and you are at the last index (i = 4)
      // then if you access s[i + 1] from there, then i + 1 = 4 + 1 = 5, so s[5] but it isn't in the string
      // so this will cause some issues. Just be careful when you try to access indices
      // make sure that the indices are in the string or not
      if (i + 2 < len and s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0') {
        is_good = true;
      }

      // check if the next three characters are 101
      if (i + 2 < len and s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1') {
        is_good = true;
      }
    }
    if (is_good) {
      cout << "Good\n";
    }
    else {
      cout << "Bad\n";
    }
  }
  return 0;
}