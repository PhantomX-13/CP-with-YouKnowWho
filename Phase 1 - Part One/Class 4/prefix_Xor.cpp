#include <iostream>
using namespace std;

const int N = 2e5 + 9;

int a[N];
int prefix_xor[N];

int main()
{
    int n,q; cin >> n >> q;
    for(int i=1;i<= n; i++)
    {
        cin >> a[i];
    }

    for(int i=1; i<= n; i++)
    {
        prefix_xor[i] = prefix_xor[i-1] ^ a[i];
    }

    while(q--){
        int l,r; 
        cin >> l >> r;

        cout << (prefix_xor[r] ^ prefix_xor[l-1]) << endl;
    }
    return 0;
}

/*
Sample input: 
8 4
3 2 4 5 1 1 5 3
2 4
5 6
1 8
3 3

output: 
3
0
6
4
*/