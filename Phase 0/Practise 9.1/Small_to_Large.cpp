#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int cs = 0;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int minimum = min(min(a,b),c);
        int maximum = max(max(a,b),c);
        int middle = (a+b+c-maximum-minimum);
        ++cs;
        cout <<"Case " << cs << ": ";
        cout << minimum << ' ' << middle << ' ' <<  maximum <<'\n' ;
    }
    return 0;
}