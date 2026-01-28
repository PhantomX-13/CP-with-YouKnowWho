#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int non_decreasing_subArray_count = 0;
    for (int l = 0; l < n; l++) { // left endpoint of the subarray
      for (int r = l; r < n; r++) { // right endpoint of the subarray, should be >= l

        bool is_non_decreasing = true; // assume it is non-decreasing
        // the subarray contains indices from l to r
        for (int i = l; i < r; i++)
        {
         if(a[i] > a[i+1]){
          is_non_decreasing = false;
          break;
         }
        }
        if(is_non_decreasing){
          non_decreasing_subArray_count++;
        }

      }
    }
    cout << non_decreasing_subArray_count << '\n';
  }
  return 0;
}