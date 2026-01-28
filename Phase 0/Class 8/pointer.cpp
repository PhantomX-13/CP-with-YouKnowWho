#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout << &x << '\n';

    int *ptr;
    ptr = &x;

    cout << ptr << '\n';
    cout << *ptr << '\n';

    return 0;
}