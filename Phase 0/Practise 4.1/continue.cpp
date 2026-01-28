#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i = 1; i <= n; i++){
        int l_d = i % 10; 
        //if ((l_d == 9) && (i % 3!= 0)){
          //  cout << i << endl ; 
        //}
    if( l_d != 9){
        continue; 
    }
    if(i%3 == 0){
        continue; 
    }
    cout << i << endl;
    }
}