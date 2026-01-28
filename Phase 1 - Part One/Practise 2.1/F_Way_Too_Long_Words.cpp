#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        if(s.length()>10)
        {
            cout<< s.front() << s.length()-2 << s.back()<<'\n';
        }
        else if(s.length()<10 && s.length()>0){
            cout << s << '\n';
        }
    }
    return 0;
}
