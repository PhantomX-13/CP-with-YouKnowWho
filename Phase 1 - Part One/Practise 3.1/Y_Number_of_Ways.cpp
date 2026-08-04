#include <iostream>
using namespace std;

int ways = 0;

void No_of_ways(int s, int e)
{
    if (s > e)
        return;
    if (s == e){
        ways++;
        return;
    }
    No_of_ways(s+1, e);
    No_of_ways(s+2, e);
    No_of_ways(s+3, e);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int s,e;
    cin >> s >> e;

    No_of_ways(s,e);
    cout << ways << '\n';
    return 0;
}