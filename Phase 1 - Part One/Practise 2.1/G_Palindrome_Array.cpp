#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<int> rev = a;

    reverse( rev.begin(),rev.end());
    if(a==rev){
        cout <<"YES";
    }
    else{
         cout << "NO";
    }
    return 0;
}
