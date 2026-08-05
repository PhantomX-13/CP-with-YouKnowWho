#include <iostream>
using namespace std;

const int MAXN = 1e5 + 9;
int a[MAXN];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin >> n))
        return 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n-1;
    bool ok = true;

    while(l < r)
    {
        if(a[l] != a[r])
        {
            ok = false;
            break;
        }
        l++;
        r--;
    }

    if(ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}