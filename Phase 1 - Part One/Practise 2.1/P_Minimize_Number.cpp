#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int operations = 0;
    
    while(true)
    {
        bool allEven = true;
        
        for(int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                allEven = false;
                break;
            }
        }
        
        if(!allEven)
        {
            break;
        }
        
        for(int i = 0; i < n; i++)
        {
            a[i] /= 2;
        }
        operations++;
    }
    cout << operations << endl;
    return 0;
}
