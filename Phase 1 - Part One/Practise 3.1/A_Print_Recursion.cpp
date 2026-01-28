#include <iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout << "I love Recursion" << '\n';

    print(n-1); //recursion
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    print(n);
    return 0;
}