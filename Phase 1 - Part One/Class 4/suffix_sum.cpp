#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int suffix_sum [n+2];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    suffix_sum[n+1] = 0;
    for(int i=n; i >= 1; i--)
    {
        suffix_sum[i] = suffix_sum[i+1] + a[i];
    }
    int ans = 0;

    for(int i=1; i <= n; i++)
    {
        //fix i
        int sum = 0;
        // for(int j=1; j <= n; j++)  --> Bruteforce
        // {
        //     sum += a[i] * a[j];
        // }

        sum = a[i] * suffix_sum[i+1];
        ans += sum; 
    }
    cout << ans << '\n';
    return 0;
}

/*
Sample input : 
3
3 4 1

Output: 
64
*/
