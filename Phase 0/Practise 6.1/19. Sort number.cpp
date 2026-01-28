#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    int minimum = min(min(a,b),c);
    int maximum = max(max(a,b),c);
    int middle = a+b+c - minimum - maximum;
    cout<< minimum << '\n';
    cout<< middle <<'\n';
    cout << maximum << '\n';
    cout << '\n';
    cout << a << '\n';
    cout << b <<'\n';
    cout << c << '\n';
    return 0;
}