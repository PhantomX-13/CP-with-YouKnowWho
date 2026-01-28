#include<iostream>
using namespace std;

int sum_of_digit(int n)
{
    int sum = 0;
    while(n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int total = 0;
    for(int i = 1; i<= n; i++)
    {
        int x = sum_of_digit(i);
        if( x >= a && x <= b)
        {
            total += i ;
        }
    }
    cout << total << '\n';
}