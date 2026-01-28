#include<iostream>
using namespace std;
int main(){
    int test;
    cin >> test;
    for(int i=1; i <= test; i++){
       int n; 
       cin >> n;
       cout << "Case " << i << ": ";
       for(int j=1; j<= n; j++){
        if(n % j == 0){
            cout<< j << " ";
        }
        
       }
       cout << endl;
    }
}