#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        int spaces = n - i;
        for(int j = 1; j <= spaces; j++){
            cout<< ' ';
        }
        int starts = 2 * i - 1;
        for(int j = 1; j <= starts; j++){
            cout << '*';
        }
        cout << '\n';
    }

    for(int i = n; i >= 1; i--){
        int spaces = n - i;
        for(int j = 1; j <= spaces; j++){
            cout<< ' ';
        }
        int starts = 2 * i - 1;
        for(int j = 1; j <= starts; j++){
            cout << '*';
        }
        cout << '\n';
    }
     return 0; 
}