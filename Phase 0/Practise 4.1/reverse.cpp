#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for ( int i = n; i>= 1; i--){
        if(i%3 == 0){
            cout << i << endl;
        }
    }
}