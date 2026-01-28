struct Student {
    int roll, age;
    double height;
  };
  
  int main() {
    // 1 will be assigned to the first member, 20 will be assigned to the second member and 5.2 will be assigned to the third member. The order is important.
    Student meena = {1, 20, 5.2};
    cout << meena.roll << '\n'; // prints 1
    cout << meena.age << '\n'; // prints 20
    cout << meena.height << '\n'; // prints 5.2
    return 0;
  }