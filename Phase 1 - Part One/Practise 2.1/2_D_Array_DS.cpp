#include<iostream>
using namespace std;

int main() {
  int a[6][6]; // 6 by 6 2D array
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cin >> a[i][j];
    }
  }
  // initialize answer with a very small number
  // as we want to calculate the maximum
  int ans = -1000000;
  for (int i = 1; i <= 4; i++) {
    for (int j = 1; j <= 4; j++) {
      // assume (i, j) is the center of the hourglass
      // that's why we are looping from index 1 to 4
      // as any cell that is on the border can't be
      // at the center of the hourglass

      // now sum the elements of this hourglass
      int sum = a[i][j]; // center
      sum += a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1]; // top 3 elements of the hourglass
      sum += a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1]; // bottom 3 elements of the hourglass

      ans = max(ans, sum); // maximize with answer
    }
  }

  cout << ans << '\n';
  return 0;
}