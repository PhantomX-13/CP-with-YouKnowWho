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
    int max_element = -1e9;

    for(int i=0; i<n; i++)
    {
        max_element = max(max_element, a[i]);
    }

    cout << max_element << endl;
    return 0;
}
