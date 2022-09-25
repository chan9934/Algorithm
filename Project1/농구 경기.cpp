#include"bits/stdc++.h"

using namespace std;

int cnt[26];
int a;
string s;
string ret;
int main()
{
	ios_base::sync_with_stdio(false);
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		cin >> s;
		++cnt[(int)(s[0] - 'a')];
	}

	for (int i = 0; i < 26; ++i)
	{
		if (cnt[i] >= 5)
		{
			ret += i + 'a';
		}
	}
	if (ret.size())
	{
		cout << ret;
	}
	else
	{
		cout << "PREDAJA";
	}
	return 0;
}