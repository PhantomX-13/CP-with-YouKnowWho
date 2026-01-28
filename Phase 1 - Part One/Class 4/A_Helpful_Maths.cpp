#include <iostream>
using namespace std;

const int N = 109;
char s[N];
int digit[N];
int main()
{
    cin >> s;
    int n = strlen(s);
    int digit_id = 0;
    for(int i=0; i<n; i+= 2)
    {
        digit[digit_id] = s[i]- '0';
        digit_id++;
    }

    sort(digit, digit + digit_id);

    for(int i=0; i<digit_id; i++)
    {
        cout << digit[i];
        if( i < digit_id -1) cout << "+";
    }
    cout << '\n';
    return 0;
}

//Adhoc problem