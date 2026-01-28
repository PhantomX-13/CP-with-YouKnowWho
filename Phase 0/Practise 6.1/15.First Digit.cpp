#include<iostream>
using namespace std;

int main() {
  int x; cin >> x;
  // notice that the number is from 1000 to 9999
  // so the first digit can be found by dividing the number by 1000

  int first_digit = x / 1000; // floor division
  if (first_digit % 2 == 0) {
    cout << "EVEN\n";
  }
  else {
    cout << "ODD\n";
  }

  // the following is another of way of getting the first digit
  // notice that we can take the input in any format we like
  // the judging system only cares about what we print in the output file!
  //
  // char x[100];
  // cin >> x;
  // int first_digit = x[0] - '0';
  return 0;
}