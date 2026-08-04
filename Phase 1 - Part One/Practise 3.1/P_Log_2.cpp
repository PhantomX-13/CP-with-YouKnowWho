#include <iostream>
using namespace std;

long long solve_Log(long long n)
{
    
    if(n == 1)
    {
        return 0;
    }
    return 1 + solve_Log(n / 2);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    long long n;
    if(cin >> n)
    {
        cout << solve_Log(n) << '\n';
    }
    return 0;
}