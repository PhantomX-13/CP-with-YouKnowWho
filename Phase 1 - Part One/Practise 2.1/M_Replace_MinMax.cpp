#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    int minimum = 1e6; //larger than any starting value, so maximum gets updated correctly
    int position_of_minimum = -1; 
    int maximum = -1e6; //smaller than any possible element
    int position_of_maximum = -1;
    for(int i=0;i<n; i++){
        if(a[i] < minimum){
            minimum = a[i];
            position_of_minimum = i;
        }
    }

    for(int i=0;i<n; i++){
        if(a[i] > maximum){
            maximum = a[i];
            position_of_maximum = i;
        }
    }

    swap (a[position_of_minimum], a[position_of_maximum]);

    for(int i=0; i<n; i++){
        cout << a[i] << ' ';
    }
    cout << '\n';
    return 0;
}
