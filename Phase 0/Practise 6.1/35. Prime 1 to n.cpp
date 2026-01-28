#include<iostream>
using namespace std;

bool is_prime(int n){
    int divisors = 0;
    for(int i =1; i <= n; i++){
        if(n % i == 0){
            divisors++;
        }
    }
    if (divisors == 2){
        return true;
    }
    else{
        return false;
    }
    
}


int main(){
    int n;
    cin >> n;
    
    for(int i =1; i <= n; i++){
        if(is_prime(i)){
            cout << i <<' ';
        }
    }
    
}