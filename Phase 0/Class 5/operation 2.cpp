#include<iostream>
using namespace std;
int main(){
    int operations = 0;
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 6; j++) {
        if (j == 3 || j == 5) continue; // Skip the operation increment when j is 3 or 5
        operations++; // Otherwise, increment the operations counter
    }
}
cout << operations << '\n'; // Output the total number of operations
}