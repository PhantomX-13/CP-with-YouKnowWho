#include<iostream>
#include <assert.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool watched[n + 1]; // an array where watched[i] is true if Polycarpus has watched the ith episode
  for(int i = 1; i <= n; i++)
  {
    watched[i] = false; // initially everything is false
  }

  for(int i = 1; i < n; i++)
  {
    int episode; cin >> episode;
    watched[episode] = true; // add it to his watchlist
  }
  int not_watched = -1;
  // there is exactly one eposode that has not been watched according to the statement
  for (int i = 1; i <= n; i++)
  {
    if(!watched[i])
    {
      not_watched = i;
    }
  }
  
  cout << not_watched << '\n';
  assert(not_watched != -1);
  // this function checks if we indeed found an episode that has not been watched
  // this assert function might be useful in some cases when you want to check if what you assumed
  // is exactly that or not
  // if some assertions fail, then you will get runtime error
  return 0;
}
// Time: O(n)
// Space: O(n)