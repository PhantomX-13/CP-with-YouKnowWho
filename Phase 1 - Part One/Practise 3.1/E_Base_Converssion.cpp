#include <iostream>
using namespace std;

void bits(int n)
{
    if(n==0)
    {
        return;
    }

    int last_bit = n % 2;
    int num_without_last_bit = n / 2;
    bits(num_without_last_bit);
    cout << last_bit;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        bits(n);
        cout << '\n';
    }
    return 0;
}
//This repository documents my entire competitive programming journey from the very first day I decided to step into this world. An effort that began because of themotivation, guidance and push I received from YouKnowWho academy. Every solution, every improvement is stored here as a reminder of where I started and how far I plan to go. Thank you!