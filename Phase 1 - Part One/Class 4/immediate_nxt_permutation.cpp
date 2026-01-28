#include <iostream>
using namespace std;

int main()
{
    int n=3;
    int a[] = {1, 2, 3};
    next_permutation(a,a+n);
    //prev_permutation(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
