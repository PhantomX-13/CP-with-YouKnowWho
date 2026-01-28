#include <iostream>
using namespace std;

void hey() {
    cout << "Hey man!" << endl;
}

int main() {
    cout << "Start\n";
    hey(); // First call to hey
    cout << "Mid\n";
    hey(); // Second call to hey
    cout << "End\n";
    return 0;
}