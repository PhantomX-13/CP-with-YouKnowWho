#include <iostream>
using namespace std;

const int N = 505;
int a[N][N];

int n;

void swap_rows(int row1, int row2)
{
    for(int column=1; column<=n; column++){
        swap(a[row1][column], a[row2][column]);
    }
}

void swap_column(int column1, int column2)
{
    for(int rows=1; rows<=n; rows++){
        swap(a[rows][column1], a[rows][column2]);
    }
}

int main()
{
    int x,y;
    cin >> n >> x >> y;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }

    swap_rows(x,y);
    swap_column(x,y);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
