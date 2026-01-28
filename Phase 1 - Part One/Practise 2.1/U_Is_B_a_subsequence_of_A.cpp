#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n], b[m];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    //check if B is a subsequence of Array a
    int current_index_in_a = 0;
    for(int i=0; i<m; i++){
        bool element_found = false;

        while(current_index_in_a < n){ //don't understand from here
        if(a[current_index_in_a] == b[i]){
            element_found = true;
            current_index_in_a++;
            break;
        }
        current_index_in_a++;
      }
      if(!element_found){
        cout << "NO\n";
        return 0;
      }
    }
    cout << "YES\n";
    return 0;
}
