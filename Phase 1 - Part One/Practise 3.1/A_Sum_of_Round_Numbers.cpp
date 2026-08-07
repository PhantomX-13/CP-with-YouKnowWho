#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
    {
		int n;
		cin >> n;
		vector<int> ans;
		int power = 1;
		while(n > 0)
        {
			if(n%10 > 0)
            {
				ans.push_back((n % 10) * power);
			}

		    n /= 10;
			power *= 10;
		}
		cout << ans.size() << '\n';
		for (auto number : ans)
            cout << number << " ";
		cout << '\n';
	}
}
//Problem: https://codeforces.com/problemset/problem/1352/A