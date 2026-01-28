#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    int minimum = a[1];
    int pos = 1;
    for(int i=2; i<=n; i++)
    {
        if(a[i] < minimum)
        {
            minimum = a[i];
            pos = i;
        }
    }
    cout << minimum << ' ' << pos << '\n';
    return 0;
}