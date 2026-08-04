#include <iostream>
using namespace std;

bool can_reach(long long curr, long long n)
{
    if(curr == n) return true;

    if(curr > n) return false;

    return can_reach(curr * 10, n) || can_reach(curr * 20, n);
}

void solve()
{
    long long n;
    cin >> n;

    if(can_reach(1,n))
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}