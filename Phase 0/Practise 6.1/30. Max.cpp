#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int maximum = 0;
  for(int i = 0 ; i <= n; i++){
    int x;
    cin >> x;
    maximum = max(maximum, x);
  }
  cout << maximum <<'\n';
return 0;
}