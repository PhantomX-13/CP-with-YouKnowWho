#include<iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 5) {
        if (i == 3) {
            continue; // skips the rest of the loop when i reaches 3
        }
        i++;
    }
    cout << "end\n";
    return 0;
}