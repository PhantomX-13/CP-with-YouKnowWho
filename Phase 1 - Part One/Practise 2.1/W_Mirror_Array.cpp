#include<iostream>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[n][m];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 1; i <= n; i++) {
    // just print each rows in reverse order
    for(int j = m; j >= 1; j--){
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}