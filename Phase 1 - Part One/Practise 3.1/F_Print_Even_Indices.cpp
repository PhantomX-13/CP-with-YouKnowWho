#include <iostream>
using namespace std;

const int N = 1009;
int a[N];

void print_even_indices(int i){
    if(i < 0)
        return;
    
        if(i % 2 == 0){
            cout << a[i] << ' ';
        }
        print_even_indices(i-1);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    print_even_indices(n-1);
    return 0;
}
