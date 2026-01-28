#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
  for (int line = 1; line <= n; line++) {
      if (line % 2 == 1) {
          // print X O X O X O X O in odd lines
          for (int i = 1; i <= n; i++) {
              if (i % 2 == 1) { // print X in odd positions
                  cout << "X ";
              } else {
                  cout << "O "; // print O in even positions
              }
          }
      } else {
          // print O X O X O X O X in even lines
          for (int i = 1; i <= n; i++) {
              if (i % 2 == 1) { // print O in odd positions
                  cout << "O ";
              } else {
                  cout << "X "; // print X in even positions
              }
          }
      }
      cout << '\n'; // print newline to separate the lines
  }
  return 0;
}