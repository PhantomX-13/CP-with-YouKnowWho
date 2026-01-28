#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int left = 0; left < n; left++){
        for(int right = left;right < n; right++){
            //a[left....right] is a sub-array
            for(int i=left; i<= right; i++){
                cout << a[i] << ' ';
            }
            cout << '\n';
            //time complexity --> O(n^3)
        }
    }
}