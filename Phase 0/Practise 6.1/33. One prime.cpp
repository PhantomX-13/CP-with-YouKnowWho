#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i =1; i <= n; i++){
        if(n % i ==0){
            cnt++;
        }
    }
    if(cnt == 2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    //for (int i = 2; i<= n; i++){
    //    if( n % i == 1 || n % i == n){
      //      cout <<"YES";
        //    return 0;
        //}
        //else{
          //  cout << "NO";
        //}
    //}
//}
    
}