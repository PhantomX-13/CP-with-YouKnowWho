#include <iostream>
using namespace std;

int n;
int expected_sum;
int a[25];
bool found = false;

void solve(int i, int total_sum)
{
    if(found)
        return;

    if(i>n)
    {
        if(total_sum == expected_sum)
        {
            found = true;
        }
        return;
    }

    solve(i+1, total_sum + a[i]);

    solve(i + 1, total_sum - a[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if(!(cin >> n >> expected_sum))
        return 0;

    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    solve(2, a[1]);

    if (found)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}