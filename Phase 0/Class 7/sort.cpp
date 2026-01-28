#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=5;
    int a[n] = {2,1,3,4,2};
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
}