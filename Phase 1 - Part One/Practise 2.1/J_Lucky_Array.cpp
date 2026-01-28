#include <iostream>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        //step 1 find the minimum number
        int minimum_element = 1e6; //should be  >=10^5 as in the problem -10^5 <= a[i] <= 10^5
        for(int i=0; i<n;i++){
            minimum_element = min(minimum_element, a[i]);
        }
        
        //step 2: find the number of occurence (frequencies) of it
        int frequency = 0;
        for(int i=0; i<n; i++){
            if(a[i] == minimum_element){
                frequency++;
            }
        }

        //step 3: check if odd or even
        if(frequency%2 == 1) cout << "Lucky" << '\n';
        else cout << "Unlucky" << '\n';

    return 0;
}
