#include <iostream>
#include <climits>
using namespace std;

int max_num(int a[], int n)
{
    int maximum = INT_MIN; // the min possible value of an int = -2^31
    for(int i=1; i<=n; i++)
    {
        if(a[i] > maximum)
            maximum = a[i];
    }
    return maximum;
}

int min_num(int a[], int n)
{
    int minimum = INT_MAX; // the max possible value of an int = 2^31-1
    for(int i=1; i<=n; i++)
    {
        if(a[i] < minimum)
            minimum = a[i];
    }
    return minimum;
}

bool is_prime(int n)
{
    if(n==1) return false;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}



int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=1; i<=n;i++)
    {
        cin >> a[i];
    }

    return 0;
}
