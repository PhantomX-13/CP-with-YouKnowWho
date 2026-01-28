/*Take two integer variables a and b  as input. You need to swap them.So after the swap,
 a should be equal to the value of b and b should be equal to the value of a.Finally,
print the values of a and b.*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    //a=10;
    //b = 20;
    int temp = a;
    a = b;
    b = temp;
    cout<< a << ' ' << b << '\n';
}