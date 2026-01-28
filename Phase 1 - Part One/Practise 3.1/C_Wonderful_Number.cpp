#include<iostream>
using namespace std;

bool check_odd(int n) {
  return n % 2 == 1;
}
bool is_palindrome(int n) {
  if (n == 0) return true; // special case!
  // in the problem n <= 10^9
  // there will be <= 30 bits in any number <= 10^9
  // we will first store the binary form of n in reversed order
  // then we will check if that sequence is palindrome or not
  char reversed_binary_form[40];
  int bit_count = 0;
  while (n > 0) {
    int last_bit = n % 2;
    reversed_binary_form[bit_count] = last_bit;
    bit_count++;

    int drop_last_bit = n / 2;
    n = drop_last_bit;
  }
  // now reverse the reversed binary form, to get the binary representation of n
  char binary_form[40];
  for (int i = 0, j = bit_count - 1; i < bit_count; i++, j--) {
    binary_form[i] = reversed_binary_form[j];
  }

  // now check if the binary form and the reversed form are same or not
  for (int i = 0; i < bit_count; i++) {
    if (binary_form[i] != reversed_binary_form[i]) {
      return false;
    }
  }
  return true;
}
int main() {
  int n; cin >> n;
  if (check_odd(n) and is_palindrome(n)) {
    cout << "YES\n";
  }
  else {
    cout << "NO\n";
  }
  return 0;
}