#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin >> n;
        double root = sqrt(n);
        int integer_part = (int) root;
        if( integer_part * integer_part == n){
            cout << "YES\n"; 
        }
        else{
            cout << "NO\n";
        }
    }
}