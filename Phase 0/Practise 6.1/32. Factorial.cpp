#include<iostream>
using namespace std;
int main() {
  int t;
  cin >> t; 
  for (int T = 1; T<=t; T++){
    int n;
    cin >> n;
    long long ans = 1;
    for(int i = 1; i <= n; i++){
      ans *= i;
    }
    cout << ans << '\n';
  }
}