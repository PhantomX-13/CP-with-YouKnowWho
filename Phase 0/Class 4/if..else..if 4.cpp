#include<iostream>
using namespace std;

int main() {
    bool cute = false;
    bool little = true;

    if (cute && little) {
        cout << "This is a cute little penguin\n";
    }
    else if (cute && !little) {
        cout << "This is a cute penguin\n";
    }
    else if (!cute && little) {
        cout << "This is a little penguin\n"; // This will be printed
    }
    else {
        cout << "This is a penguin\n";
    }
    return 0;
}