#include<iostream>
using namespace std;

struct Triangle {
  double base;
  double area() { // member function
    // this function can access all the members of the structure automatically
    return base * height / 2;
  }
  double height;
};

int main() {
  Triangle x;
  x.base = 10;
  x.height = 20;
  // same as x = {10, 20}

  cout << x.area() << '\n'; // (10 * 20) / 2 = 100
  x.base = 15;
  cout << x.area() << '\n'; // (15 * 20) / 2 = 150

  Triangle y = {20, 30};
  cout << x.area() << '\n'; // (15 * 20) / 2 = 150
  cout << y.area() << '\n'; // (20 * 30) / 2 = 300
  return 0;
}