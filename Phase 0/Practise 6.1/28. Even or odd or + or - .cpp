#include<iostream>
using namespace std;
int main() {
  int n;
  cin>> n;

  int a[n];
  for(int i = 0; i <n ; i++){
    cin >> a[i];
  }

  int even = 0;
  int odd = 0;
  int positive = 0;
  int negative = 0;
  for (int i = 0; i < n; i++){
    if ( abs(a[i])% 2 ==0){
        even++;
       }
    else{
        odd++;
       }
    if (a[i] > 0){
        positive++;
       }
    else if (a[i] < 0){
        negative++;
       }
     }

   cout << "Even: "<< even << '\n';
   cout <<"Odd: "<< odd << '\n';
   cout << "Positive: "<< positive << '\n';
   cout << "Negative: "<< negative << '\n';

return 0;
}