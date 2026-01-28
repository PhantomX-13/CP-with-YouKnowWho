#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int line=1; line <=n; line++){
        //for each line print number 1 to line
        for(int i = 1; i <= line ; i++){
            cout << i;
            if(i == line){
                cout <<"="; // if it is the last number in this line
                }
            else{
                cout << "+"; // print +
            }
        }
    }
    // Now calculate the sum 
    int sum = 0;
    for(int i = 1; i <= line; i++){
        sum += i ;// summing the number
        cout << sum <<'\n' ; 
    }
}