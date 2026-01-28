#include<iostream>
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i=1; i <=T ; i++){
        int n;
        cin >> n;
        if(n % 2 == 0){
            cout << "even" << '\n';
        }
        else{
            cout << "odd" << '\n';
        }
    }
}