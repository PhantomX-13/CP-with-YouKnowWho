#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int ans = 1; 
    while ( ans <= b){
        ans = ans * a ; 
    }
    cout << ans << endl;
}