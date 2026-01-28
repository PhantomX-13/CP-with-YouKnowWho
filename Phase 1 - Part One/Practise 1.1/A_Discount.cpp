#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int discount = a-b;
    double discount_percentage = (double) discount / a * 100;
    cout << fixed << setprecision(10) << discount_percentage << '\n';
    return 0;
}
