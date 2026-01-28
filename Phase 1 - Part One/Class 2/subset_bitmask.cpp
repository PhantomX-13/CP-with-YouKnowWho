#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int mask = 0; mask < (1 << n); mask++){ //2^n
        for(int i=0; i<n; i++){
            if((mask >> i) & 1) { // if i^th bit is on on mask
                cout << a[i] << ' ';
            }
        }
        cout << '\n';
    } 
    return 0;
}
//O(n * 2^n)
