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
    int x;
    cin >> x;
    int position = -1; //cz index 0 theke shuru hsse so 0 nissina
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            position = i;
            break;
        }

    }
    cout << position <<'\n';
   return 0;
}
