#include<iostream>
using namespace std;
int main(){
    int a,b,c; char op; char equal;
    cin >> a >> op >> b >> equal >> c;
    if(op == '+'){
        if(a+b == c){
            cout<<"Yes\n";
        }
        else{
            cout<< a+b;
        }
    }
    else if(op == '-'){
        if(a-b == c){
            cout<<"Yes\n";
        }
        else{
            cout<<a-b;
        }
    }
    else{
        if(a*b == c){
            cout<<"Yes\n";
        }
        else{
            cout<< a*b;
        }
    }
    return 0;
}