#include <iostream>
using namespace std;

int main()
{
    clock_t st = clock();
    int n = 1000000000;
    long long sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += 1LL * i * (n - i + 1);
    }
    cout << sum << '\n';
    clock_t en = clock();
    cout << 1.0 * (en - st) / CLOCKS_PER_SEC << "s\n";
    return 0;
}
