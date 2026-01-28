``
c++ 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n]; 
    for(int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    int b[n];
    int b_index = 0;
    for (int a_index = n - 1; a_index >= 0; a_index--){
        b[b_index] = a[a_index];
        b_index++;
    }
    for (int i=0; i<n; i++){
        a[i] = b[i];
    }
    for ( int i=0; i< n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}