/* 
*
**
***
****
*****
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n; 
    for(int line=1; line <= n; line++){
        for(int star = 1; star <= line; star++){
            cout <<'*';
        }
      cout << endl;
    }
}