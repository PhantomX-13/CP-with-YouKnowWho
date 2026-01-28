#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long int cube = (int)n * n * n;
    int result = cube % 100;
    cout << result << endl;

    return 0;
}