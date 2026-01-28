#include<iostream>
using namespace std;
int main(){
    int operations = 0;
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 6; j++) {
        operations++; // Increment the operations counter for each iteration of the inner loop
    }
}
cout << operations << '\n'; // Output the total number of operations
}