#include <iostream>
using namespace std;

int main()
{
    /* ekhane supposse koita test case seta bola thakbena
    bt kisu number deya thakbe file e various test case e , 
    total sum koto hbe seta ber krte hbe*/

    int ans = 0;
    int x;
    while(cin >> x){ //end of file er jnno input condition e rkhte hbe
        ans += x;
    }
    cout << ans << '\n';
    return 0;
}
