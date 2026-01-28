#include<iostream>
using namespace std;
int main() {
    char ch;
    cin >> ch;
    int ascii = (int)ch;

    if(isalpha(ch)){
      cout<< "ALPHA\n";
      if(isupper(ch)){
        cout<< "IS CAPITAL\n";
      }
      else{
        cout<< "IS SMALL\n";
      }
    }
    else{
      cout<<"IS DIGIT\n";
    }
  return 0;
}