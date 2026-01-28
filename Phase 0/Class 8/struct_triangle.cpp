#include<iostream>
using namespace std;

struct Triangle{
    int base, height;
    double area (){
        return base * height / 2.0;
    }
};

int main (){
    Triangle a;
    a.base = 10;
    a.height = 20;
    cout << a.area () << '\n';

    Triangle b = {20, 30};
    cout << b.area () << '\n';
    return 0;

    // we can also declare this by using array 
    // Triangle a[10];
    // a[0]= {10, 20};
    // cout << a[0].area () << '\n';
    //return 0;
}