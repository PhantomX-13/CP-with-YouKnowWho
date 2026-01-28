#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if(!(cin >> n))
        return 0;

    vector<long long> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    cout << *max_element(a.begin(), a.end()) << '\n';
    return 0;
}