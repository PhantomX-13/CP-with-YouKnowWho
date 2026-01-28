#include <iostream>
using namespace std;

void print_digits(int n) {
    if (n == 0)
        return;
    int last_dig = n % 10;
    int without_last = n / 10;
    print_digits(without_last);
    cout << last_dig << ' ';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            print_digits(n);
            cout << '\n';
        }
    }
    return 0;
}