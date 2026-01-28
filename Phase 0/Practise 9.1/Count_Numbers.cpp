#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        char s[100000];
        cin.getline(s, 100000);
        int len = strlen(s);
        int i = 0;
        while(s[i] == ' '){
            i++;
        }
        int count = 1;
        while(i + 1 < len){
            if(s[i] == ' ' && s[i + 1] != ' '){
                count++;
            }
            i++;
        }
        cout << count <<'\n';

    }
    return 0;
}