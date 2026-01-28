#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int sum = 0;
    for ( int i = 1; i <= n * n ; i++){
        sum += i*i + 3*i - 9;
    }
        cout<< sum << endl;
}