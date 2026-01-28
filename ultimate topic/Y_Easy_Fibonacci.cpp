#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];

    if(n >= 1)
        a[0] = 0;
    if( n>= 2)
        a[1] = 1;

    for(int i=2; i<n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }

    for(int i=0; i<n; i++)
    {
            cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}