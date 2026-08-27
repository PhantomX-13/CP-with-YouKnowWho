#include<iostream>
using namespace std;

const int N = 1009;
const int inf = 1e9;
int n, a[N];

int get_max(int i)
{
  if(i > n)
  {
    return -inf;
  }

  return max(a[i], get_max(i + 1));
}

int main()
{
  cin >> n;
  for(int i=1; i<=n; i++)
  {
    cin >> a[i];
  }
  cout << get_max(1) << '\n';
  return 0;
}