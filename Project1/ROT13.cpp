#include<bits/stdc++.h>

using namespace std;

string s;
int a;

int main()
{
	
	getline(cin, s);
	for (int i = 0; i < s.size(); ++i)
	{
		if ('A' <= s[i] && s[i] <= 'Z')
		{
			s[i] += 13;
			if (s[i] - 'A' >= 26)
			{
				s[i] -= 26;
			}
		}

		else if ('a' <= s[i] && s[i] <= 'z')
		{
			a = (s[i] + 13);
			if (a - 'a' >= 26)
			{
				a -= 26;
			}
			s[i] = a;
		}
	}

	cout << s;
	return 0;
}