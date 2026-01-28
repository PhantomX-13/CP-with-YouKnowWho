  #include<iostream>
  using namespace std;

  int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int num = 10;
  cout << &num << '\n'; // Output: 0x16d10a7f4 (address of 'num', which may vary on your machine)
  int* ptr; // Declaration of a pointer that can store the address of an integer variable
  ptr = &num; // Storing the address of 'num' in 'ptr'

  cout << *ptr << '\n'; // Output: 10 (value at the memory location pointed by 'ptr')
  // The `*ptr` dereferences the pointer `ptr`, giving you access to the value stored at the memory location it points to.

  *ptr = 69; // Modifying the value at the memory location pointed by 'ptr'

  cout << *ptr << '\n'; // Output: 69 (value at the memory location pointed by 'ptr')
  cout << num << '\n'; // Output: 69 (value of 'num' after modification)
  return 0;
  }