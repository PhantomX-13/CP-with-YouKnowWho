#include<iostream>
using namespace std;

int main() {
  int a, b, c; cin >> a >> b >> c;
  int minimum = min(a, min(b, c)); // take the min of b and c first and then minimize it with a
  // int minimum = min(min(a, b), c); // also correct
  int maximum = max(a, max(b, c));

  // print the minimum first as suggested by the problem
  cout << minimum << ' ' << maximum << '\n';
  return 0;
}