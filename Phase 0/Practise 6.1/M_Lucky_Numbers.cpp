#include<iostream>
using namespace std;
bool is_lucky(int n){
    while(n > 0){
        int d = n % 10;
        if(d != 4 && d != 7){
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    int a,b;
    cin >> a >> b;
    bool printed = false;
    for(int i=a; i <= b; i++){
        if(is_lucky(i)){
            cout << i << ' ';
            printed = true;
        }
    }
    if(!printed){
        cout << -1;
    }
    cout << '\n';
}