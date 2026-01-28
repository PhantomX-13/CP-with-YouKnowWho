#include<iostream>
using namespace std;
int main(){
    int operations = 0;
for (int i = 1; i <= 5; i++) {
    if (i == 4) continue; // Skip the entire inner loop when i is 4
    for (int j = 1; j <= 6; j++) {
        if (j == 4) break; // Exit the inner loop early when j is 4
        operations++; // Increment the operations counter for each valid iteration
    }
}
cout << operations << '\n'; // Output the total number of operations
}