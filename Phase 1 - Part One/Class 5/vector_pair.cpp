#include <iostream>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vector<pair< int, int>> v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(5,6));

    // for(vector<pair<int, int>>:: iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it).first << ' ' << (*it).second << '\n';
    // }

    for(auto p:v)
    {
        cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}
