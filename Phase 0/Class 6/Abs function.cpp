  #include<iostream>
  using namespace std;

  int main() {
      int x = -10;
      cout << "Absolute value of " << x << ": " << abs(x) << '\n'; // prints 10
      x = 20;
      cout << "Absolute value of " << x << ": " << abs(x) << '\n'; // prints 20
      double y = -10.5;
      cout << "Absolute value of " << y << ": " << abs(y) << '\n'; // prints 10.5
      y = 20.5;
      cout << "Absolute value of " << y << ": " << abs(y) << '\n'; // prints 20.5
      return 0;
  }