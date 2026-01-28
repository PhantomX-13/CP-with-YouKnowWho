#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long sum = 0;

    for(char ch : s)
    {
        sum += (ch - '0');
    }

    cout << sum << endl;

    return 0;
}
