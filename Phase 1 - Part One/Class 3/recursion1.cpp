#include <iostream>
using namespace std;

int sum(int n)
{
    cout << "We are at n = " << n << '\n';
    if(n == 0){
        cout << "do not to go further\n";
        cout << "returning " << 0 << " from function with n = " << n << '\n';
        return 0;
    }
    int res = sum(n-1) + n;
    cout << "returning " << res << " from function with n = " << n << '\n';
    return res;
}
int main()
{
    cout << sum(5) << '\n';
    return 0;
}
