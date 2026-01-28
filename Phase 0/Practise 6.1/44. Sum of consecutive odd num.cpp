#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    for(int test = 1; test <= test_cases; test++){
        int x,y;
        cin >> x >> y;
        if(x>y){
            swap(x, y);
        }
        int sum = 0;
        for (int i = x + 1; i < y; i++){
            if ( i % 2 == 1){
                sum += i ;
            }
        }
        cout << sum << '\n';
    }
}