#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char s[1010];
        cin >> s;
        int len = strlen(s);
        reverse (s, s + len);
        cout << s << '\n';
    }
}