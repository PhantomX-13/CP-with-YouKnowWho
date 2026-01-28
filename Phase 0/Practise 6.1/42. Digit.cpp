#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    for(int  test = 1; test <= test_cases; test++){
        int n;
        cin >> n;
        if( n == 0){
            cout << 0 << '\n';
        }
        else{
            while(n>0){
                int last_digit = n % 10;
                cout << last_digit << ' ';
                n /= 10;
            }
            cout <<'\n';
        }
    }
}