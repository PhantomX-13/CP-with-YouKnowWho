#include <iostream>
using namespace std;

bool commonDigit(int x, int y)
{
    bool digit[10] = {false};

    while(x > 0){
        int d = x % 10;
        digit[d] = true;
        x = x / 10;
    }

    if(digit[y] == true){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
       for(int y=0; y<=9; y++){
          if(commonDigit(x,y)){
            cout << y << '\n';
            break;
          }
        }
    }
    return 0;
}
