#include <iostream>
#include <string.h> // don't forget to include the header file
using namespace std;

int main() {
    char name[100];
    cin >> name;
    int len = strlen(name); // calculates the length of the string and stores it in the variable 'len'
    cout << len << '\n';
    return 0;
}