#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char a[] = "hello";
    char b[] = "hello";

    bool is_equal = true; // Assume they are equal
    int len_a = strlen(a);
    int len_b = strlen(b);

    if (len_a != len_b) { // If the lengths are not equal, then they are not equal
        is_equal = false;
    } else {
        for (int i = 0; i < len_a; i++) {
            if (a[i] != b[i]) { // If any character is not equal, then they are not equal
                is_equal = false;
                break;
            }
        }
    }

    if (is_equal) {
        cout << "They are equal\n";
    } else {
        cout << "They are not equal\n";
    }
    return 0;
}