#include<iostream>
#include <string.h>
using namespace std;

const int N = 1e5 + 9;
char s[N];
int main() {
  cin >> s; // not that the input string won't have any space, we can input it using cin >> s
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (s[i] == ',') {
      s[i] = ' '; // replace comma with space
    }
    else {
      if (isupper(s[i])) { // capital letter
        // make it small
        s[i] = tolower(s[i]);
      }
      else { // small letter
        // make it capital
        s[i] = toupper(s[i]);
      }
    }
  }
  cout << s << '\n';
  return 0;
}