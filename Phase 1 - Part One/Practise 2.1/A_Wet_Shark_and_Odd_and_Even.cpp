#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  // if the total sum is even then just print it as that is the maximum
  // if the sum is odd, then there must some integer in the array which is odd
  // you must remove at least one odd integer from the sum to get an even sum
  // and you can always remove the minimum odd number to get the maximum even sum
  // note that odd - odd = even (always)

  long long sum = 0;
  int minimum_odd_number = 1e9; // =10^9
  for (int i = 1; i <= n; i++) {
    sum += a[i];
    if (a[i] % 2 == 1) { // odd
      minimum_odd_number = min(minimum_odd_number, a[i]);
    }
  }
  if (sum % 2 == 0) {
    cout << sum << '\n';
  }
  else {
    sum -= minimum_odd_number;
    cout << sum << '\n';
  }
  return 0;
}
// Time: O(n)
// Space: O(n)