#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    long long max_subArray_sum = -1e18; //-10^18
    long long max_subArray_sum_ending_at_i = -1e18;
    for(int left = 0; left < n; left++){
            max_subArray_sum_ending_at_i = max(1LL* a[left], a[left] + max_subArray_sum_ending_at_i );
            max_subArray_sum = max(max_subArray_sum, max_subArray_sum_ending_at_i);
        }
    cout << max_subArray_sum << '\n';
}