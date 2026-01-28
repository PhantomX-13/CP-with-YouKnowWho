#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    int a[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum1 = 0, sum2 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                sum1 += a[i][j];
                sum2 += a[i][n-1-i];
            }
        }
    }
    
    cout << abs(sum1 - sum2) << '\n';

    return 0;
}
