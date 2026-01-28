#include<iostream>
using namespace std;

void swap_them(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
  cout << a << ' ' << b << '\n'; // Output: 20 10 (values of 'a' and 'b' are swapped), but this change is not reflected in the main function
}
int main() {
  int a = 10, b = 20;
  swap_them(a, b);
  cout << a << ' ' << b << '\n'; // Output: 10 20 (no change in the values of 'a' and 'b')
  return 0;
}