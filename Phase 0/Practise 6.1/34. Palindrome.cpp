#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int original_n = n;
    int rev = 0;
    while ( n > 0){
        int last_digit = n % 10;
        n /= 10;
        rev = rev * 10 + last_digit;
    }
    cout << rev << '\n';
    if(original_n==rev){
        cout << "YES\n";
    }
    else{
        cout <<"NO\n";
    }
}