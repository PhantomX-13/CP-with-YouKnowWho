#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //for (int n = 1; n <= 20; n++){
      //  if(n%2 == 0){
        //    cout<< n << endl;
        //}
    //}
    //return 0;
//} 
    for (int i = 1; i <= n ; i++){
        if( i % 2==0){
            cout << i << endl;
        }
    }
    return 0; 
}