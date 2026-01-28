#include<iostream>
using namespace std;

const int N = 50; // max value of n
long long fib[N + 1]; // need long long data type, try printing for n = 50

int main() {
  int n; cin >> n;
  fib[1] = 0;
  fib[2] = 1;
  for (int i = 3; i <= n; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  cout << fib[n] << '\n';
  return 0;
}