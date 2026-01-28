#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=6;
    int a[n] = {0,1,2,3,4,5};
    reverse(a+1, a+n -1);
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}