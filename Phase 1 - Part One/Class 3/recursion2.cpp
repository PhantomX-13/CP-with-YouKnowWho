#include<iostream>
using namespace std;

void count_down(int n) {
  if (n == 0) {
    cout << "0: Base Case!" << endl;
  }
  else {
    cout << n << endl;
    count_down(n - 1); // Recursive call
    //result 5..4..3..2..1..0
  }
}

int main() {
  count_down(6);
  return 0;
}