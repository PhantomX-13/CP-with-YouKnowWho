#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    int ans = 0;
    // while(sum >= n)
    // {
    //     ++ans;
    //     sum -= n;
    // }
    ans = sum /n;
    
    if( sum % n >= 1)
    {
        ++ans;
    }
    //ans = (sum + n -1) / n;
    
    cout << ans << '\n';
    return 0;
}

//Greedy problem