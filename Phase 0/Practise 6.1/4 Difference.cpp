#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    long long x = (long long)a * b - (long long)c * d;
    cout <<"Difference = " << x << endl;
    return 0;
}