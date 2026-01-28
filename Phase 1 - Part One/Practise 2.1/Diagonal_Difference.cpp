#include<iostream>
using namespace std;
/**
indices of a 4 by 4 matrix:

(1, 1) | (1, 2) | (1, 3) | (1, 4)
(2, 1) | (2, 2) | (2, 3) | (2, 4)
(3, 1) | (3, 2) | (3, 3) | (3, 4)
(4, 1) | (4, 2) | (4, 3) | (4, 4)


Primary diagonal:
(1, 1) |        |        |
       | (2, 2) |        |
       |        | (3, 3) |
       |        |        | (4, 4)

So, (i, j) is in primary diagonal if j = i

Secondary diagonal:
       |        |        | (1, 4)
       |        | (2, 3) |
       | (3, 2) |        |
(4, 1) |        |        |

So, (i, j) is in secondary diagonal if j = n - i + 1
**/
int main() {
  int n; cin >> n;
  int a[n + 1][n + 1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }

  int primary_diagonal_sum = 0;
  // (i, j) is in primary diagonal if j = i
  for (int i = 1; i <= n; i++) {
    primary_diagonal_sum += a[i][i];
  }

  int secondary_diagonal_sum = 0;
  // (i, j) is in secondary diagonal if j = n - i + 1
  for (int i = 1; i <= n; i++) {
    secondary_diagonal_sum += a[i][n - i + 1];
  }

  cout << abs(primary_diagonal_sum - secondary_diagonal_sum) << '\n';
  return 0;
}
// Time: O(n^2)
// Space: O(n^2)