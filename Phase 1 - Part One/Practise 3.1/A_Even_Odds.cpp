#include <iostream>
#define ll long long
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll odd_count = (n+1)/2;
    ll rslt = 0;

    if (k<=odd_count)
    {
        rslt = 2*k - 1;
    }
    if (k>odd_count)
    {
        rslt = 2 * (k - odd_count);
    }

    cout << rslt << '\n';
    return 0;
}