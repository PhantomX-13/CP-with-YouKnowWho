  #include<iostream>
  using namespace std;
  int main()
  {
      int number = 5;
      int x;

      if (number > 0) { // condition is true
          cout << "The number is positive\n"; // This will print
          cout << "The number is greater than 0\n"; // This will print

          x = 10;
          cout << "x = " << x << '\n'; // This will print
      }

      cout << "x = " << x << '\n'; // This will print (x = 10)

      return 0;
  }