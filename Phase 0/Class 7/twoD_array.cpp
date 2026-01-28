#include<iostream>
using namespace std;
int main(){
    int a[2][3];
    for(int i = 0;i<2; i++){
        for(int j = 0; j<3; j++){
            cin >> a[i][j];
     
        }
    }
    cout << "Sum of Row: ";
    for(int i = 0;i<2; i++){
        int sum = 0;
        for(int j = 0; j<3; j++){
            sum += a[i][j];
        }
        cout << sum  << ' ';
        
    }
    cout << endl;

    cout << "Sum of Column: ";

    for(int j = 0;j<3; j++){
        int sum = 0;
        for(int i = 0; i<2; i++){
            sum += a[i][j];
        }
        cout << sum  << ' ';
    }
    cout << endl;
}