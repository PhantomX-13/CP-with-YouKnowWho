#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    int tot_sum = 0;
    for(int i=1; i<= n; i++)
    {
        tot_sum += a[i]; 
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

        sum = a[i] * tot_sum;
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
