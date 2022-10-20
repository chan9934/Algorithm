#include <bits/stdc++.h>

using namespace std;

int N;
string S;

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> S;
		if (S.size() & 1)
		{
			cout << "NO" << "\n";
		}
		else
		{
			/*cout << S.find("()") << "\n";*/
			while (S.find("()") != string::npos)
			{
				S.erase(S.find("()"), 2);

			}
			if (S.size() != 0)
			{
				cout << "NO\n";
			}
			else
			{
				cout << "YES\n";
			}
		}
	}
}