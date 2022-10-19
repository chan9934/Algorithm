#include <bits/stdc++.h>

using namespace std;

string Password;

bool Isbool(char a)
{
	if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
	{
		return true;
	}

	else
	{
		return false;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	while (1)
	{
		cin >> Password;

		if (Password == "end")
		{
			break;
		}
		
		int IsA = 0;
		int IsQ = 0;
		bool flag = true;
		bool V = false;
		char prev = ' ';
		for (int i = 0; i < Password.size(); ++i)
		{
			if (Isbool(Password[i]))
			{
				++IsA;
				IsQ = 0;
				V = 1;

			}

			else
			{
				++IsQ;
				IsA = 0;
			}

			if (IsA == 3 || IsQ == 3)
			{
				flag = 0;
			}

			if ((i > 0) && prev == Password[i] && Password[i] != 'o' && Password[i] != 'e')
			{
				flag = 0;
			}
			prev = Password[i];
		}
		if (V == 0)
		{
			flag = 0;
		}
		if (flag == 1)
		{
			cout << '<' << Password << '>' << " is acceptable." << "\n";
		}
		else
		{
			cout << '<' << Password << '>' << " is not acceptable." << "\n";
		}
		


	}
	
}