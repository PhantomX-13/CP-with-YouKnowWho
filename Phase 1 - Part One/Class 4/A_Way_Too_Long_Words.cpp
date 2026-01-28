#include <iostream>
using namespace std;

const int N = 109;
char s[N];
int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> s;
        int len = strlen(s);
        if(len > 10){
            cout << s[0] << len-2 << s[len-1] << '\n';
        }
        else{
            cout << s << endl;
        }
    }
    return 0;
}

//Adhoc problem