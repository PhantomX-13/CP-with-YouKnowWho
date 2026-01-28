#include <iostream>
using namespace std;

int main() {
    string S;
    getline(cin, S); 

    for(char c : S) {
        if(c == '\\') break;
        cout << c;
    }

    return 0;
}
