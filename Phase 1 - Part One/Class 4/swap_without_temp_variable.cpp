#include <iostream>
using namespace std;

int main()
{
    int x=10, y=20; //real_x, real_y
    x = x + y;
    y = x - y; // (real_x + real_y) - real_y = real_x
    x = x - y; // (real_x + real_y) - real_x = real_y
    cout << x << ' ' << y << '\n';
    return 0;
}
