#include <iostream>
using namespace std;

const int n = 505;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int r,c;
    cin >> r >> c;
    int A[n][n] = {0};
    int B[n][n] = {0};
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cin >> A[i][j];
        }
    }

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cin >> B[i][j];
        }
    }
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}