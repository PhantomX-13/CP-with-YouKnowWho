#include<iostream>
#include<string.h> // for strlen
using namespace std;

int main() {
  char s[11]; // should be at least 11, because the maximum length of s is 10 and we need an extra place for the null character
  cin >> s; // read the string
  int n = strlen(s); // find the length of the string
  for (int i = 1; i < n; i++) {
    s[i - 1] = s[i]; // copy the ith character to the (i - 1)th position
  }
  s[n - 1] = '\0'; // put the null character at the (n - 1)th index to mark the end of the string
  cout << s << '\n';
  return 0;
}