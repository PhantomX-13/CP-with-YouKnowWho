#include<iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    if(islower(ch)){
        cout << (char)toupper(ch)<<'\n';
    }
    else{
        cout<< (char)tolower(ch)<<'\n';
    }
  return 0;
}