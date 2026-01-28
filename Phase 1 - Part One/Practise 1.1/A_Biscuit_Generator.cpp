#include <iostream>
using namespace std;

int main()
{
    int a,b,t;
    cin >> a >> b >> t;

    int count = (int)((t+0.5)/a); //nmbr of time biscuit are produced
    int result = count * b; //total biscuit

    cout << result << endl;
    return 0;
}

/* 
A biscuit-making machine produces B biscuits every A seconds.

It produces them at times: A, 2A, 3A, ..., up to T + 0.5 seconds.

I have to calculate how many biscuits are produced within T + 0.5 seconds after activation.
*/
