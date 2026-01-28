#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        char s[100];
        cin >> s;
        int n = strlen(s);
        int last_digit = s[n - 1] - '0';
            if(last_digit % 2 ==0 ){
                cout <<"even" << '\n';               
                }
            else{
                cout << "odd" << '\n';
                }
    }
}