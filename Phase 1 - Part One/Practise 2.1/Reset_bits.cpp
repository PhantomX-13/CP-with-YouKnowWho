#include<iostream>
using namespace std;

int main() {
  int n, k; cin >> n >> k;
  cout << (n & ((1u << 31) - (1u << k))) << '\n';
  return 0;
}