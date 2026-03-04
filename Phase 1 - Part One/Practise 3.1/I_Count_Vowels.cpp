#include <iostream>
using namespace std;

int countVowels(string s)
{
    if(s.empty())
        return 0;
    
    char ch = tolower(s.back());

    s.pop_back();

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return 1 + countVowels(s);
    else
        return countVowels(s);
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s;
    getline(cin, s);

    cout << countVowels(s) << '\n';

    
    return 0;
}
