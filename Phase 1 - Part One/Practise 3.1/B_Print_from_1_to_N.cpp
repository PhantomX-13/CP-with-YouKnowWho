#include <iostream>
using namespace std;

void print(int n, int q){
    if(n>q){
        return;
    }
    
    cout << n << '\n';
    print(n+1, q);

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n,q;
    cin >> n >> q;
    print(1,n);
    return 0;
}