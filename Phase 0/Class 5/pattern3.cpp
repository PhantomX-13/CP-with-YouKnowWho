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
    cin>> n;
    for(int line = 1; line <= n; line++ ){
        int star_count = line;
        int space_count = n - star_count ;
          for(int i =1; i <= space_count; i++){
            cout << ' ';
          }
          for (int i = 1; i <=star_count ; i++ ){
            cout << '*';
          }
          cout << '\n' ;
    }
}