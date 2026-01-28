#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double x;
    cin >> x;
    cout << round(x) << endl;
}


/* 
Rounds upward to the nearest integer--> ceil(3.1) = 4
ceil(3.6) = 4

Rounds downward to the nearest integer--> floor(3.4) = 3
floor(3.9) = 3

Rounds to the nearest integer
(0.5 and above goes up, below 0.5 goes down) --> round(3.4) = 3
round(3.6) = 4
*/