#include <iostream>
#include <assert.h>
using namespace std;

int divide(int a, int b) {
  assert(b != 0); // If b is 0, then the program will terminate with a runtime error
  return a / b;
}

int main() {
  int n;
  cin >> n;
  assert(n >= 1 && n <= 100); // If n is not in the range [1, 100], then the program will terminate with a runtime error
  cout << n << '\n';
  cout << divide(10, 2) << '\n';
  cout << divide(10, 0) << '\n'; // This will give a runtime error
  return 0;
}