#include<iostream>
using namespace std;

int main() {
  int *ptr; 
  int num = 10;
  ptr = &num; 
  cout << "Address of num = " << &num << '\n';
  cout << "ptr is pointing at " << ptr << '\n';
  cout << "ptr is storing the value = " << *ptr << '\n';
  *ptr = 20; 
  cout << "After the update ptr is storing the value = " << *ptr << '\n';
  cout << "Value of num = " << num << '\n';
  return 0;
}