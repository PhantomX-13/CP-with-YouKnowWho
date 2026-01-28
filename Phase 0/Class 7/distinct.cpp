#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] += 1000; // to make all the numbers positive
    }
    bool visited[2001]; // should be at least 2001 because the numbers can be from -1000 to 1000 and we have made them positive by adding 1000, so the numbers can be from 0 to 2000
    for (int i = 0; i < 2001; i++) {
        visited[i] = false; // initially all the numbers are not visited
    }
    for (int i = 0; i < n; i++) {
        int x = a[i];
        visited[x] = true; // mark the number as visited
    }
    int cnt = 0;
    for (int i = 0; i < 2001; i++) {
        if (visited[i]) { // count the number of visited numbers
            cnt++;
        }
    }
    cout << cnt << '\n';
}