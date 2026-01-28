#include <iostream>
using namespace std;

int main()
{
    int a=1, b=5;
    int x = a ^ b;
    cout << "X-OR: " << x << '\n';
    cout << "OR: " << (1 | 6) << '\n';
    cout << "AND: " << (5 & 7) << '\n';
    cout << "NOT: " << ~10 << '\n';
    cout << endl;

    //now discuss on left shift
    int y = 3;
    cout << "After left shift: " << (y << 3) << '\n';
    return 0;
}
