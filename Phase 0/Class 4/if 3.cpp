  #include<iostream>
  using namespace std;
  int main()
  {
      int number = 5;

      if (number > 0) { // condition is true
          cout << "The number is positive\n"; // This will print
      }

      if (number < 0) { // condition is false
          cout << "The number is negative\n"; // This will not print
      }
      return 0;
  }