#include <iostream>
#include<cstring>
using namespace std;

int sum_of_digits(int n){
    int sum = 0;
    while(n>0){
        int last_digits = n % 10;
        sum += last_digits;
        n = n/10;
    }
    return sum;
}
int main()
{
    char s[100005];
    cin >> s;
    int ans = 0;
    int digit_sum = 0;
    int len = strlen(s);
    if(len == 1){
        cout << 0 << '\n';
        return 0;
    }

    for(int i=0; i< len; i++){
        digit_sum += s[i] - '0';
    }

    ans++;
    int n = digit_sum;
    while( n > 9){
        n = sum_of_digits(n);
        ans++;
    }
    cout << ans << '\n';
    return 0;
}
