#include<iostream>
using namespace std;
int main(){
    double n;
    cin >> n;
    int integer = (int) n;

    if(integer == n){
        cout << "int " << integer << '\n';
    }
    else{
        cout << "float " << integer <<" " <<  n - integer << '\n';
    }
    return 0;
}