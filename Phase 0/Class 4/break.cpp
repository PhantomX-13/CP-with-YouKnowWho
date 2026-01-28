#include<iostream>
using namespace std;

int main() {
    cout << "Enter any number. Enter 7 to exit.\n";
    while (true) {
        int num;
        cin >> num; // Read a number from the user
        if (num == 7) {
            cout << "You entered 7, so the loop is terminated.\n";
            break; // Exits the loop when 7 is entered
        }
        cout << "You entered " << num << '\n';
    }

    return 0;
}