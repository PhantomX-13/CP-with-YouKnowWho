#include<iostream>
using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int frequency[m + 1]; // 1 based indexing 
  
  for (int i = 0; i <= m; i++) { //0 diye initialize krsi
    frequency[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    frequency[a[i]]++; /*suppose a[i] = 3 → frequency[3]++,means 3 bar 3 thakle frequency[3] = 3 hye jbe*/
  }

  for (int i = 1; i <= m; i++) {
    cout << frequency[i] << '\n';
  }
  return 0;
}

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> freq(m + 1, 0);    // frequency vector of size m+1, initialized to 0

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    for (int i = 1; i <= m; i++) {
        cout << freq[i] << '\n';
    }

    return 0;
}

*/