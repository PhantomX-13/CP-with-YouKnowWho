#include<iostream>
#include<iomanip> // for using setprecision
using namespace std;

int main() {
  double PI = 3.141592653; 
  
  double R; cin >> R;
  double area = PI * R * R;

  // use setprecision to print UPTO 9 digits after the decimal point
  // use fixed to print EXACLTLY 9 digits after the decimal point
  // so if the result is 1.4569 then using setprecision(9) will output 1.4569
  // and using fixed << setprecision(9) will output 1.456900000
  // it is always better to use fixed when you use setprecision
  cout << fixed << setprecision(9) << area << '\n';
  return 0;
}