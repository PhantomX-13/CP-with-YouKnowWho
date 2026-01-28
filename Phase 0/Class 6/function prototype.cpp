#include <iostream>
using namespace std;

int get_sum(int, int);

int main() 
{
    int sum;
    sum = get_sum(10,20);
    cout << sum << '\n';
    return 0;
}

int get_sum(int a, int b){
    int sum = a + b;
    return sum;
}
