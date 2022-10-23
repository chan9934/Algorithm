#include<bits/stdc++.h>

using namespace std;

string S;

bool Check(string S)
{
	stack<char>Stk;
	for (auto a : S)
	{
		if (a == '(')
		{
			Stk.push(a);
		}
		else if (a == '[')
		{
			Stk.push(a);
		}

		else if (a == ')')
		{
			if (!Stk.empty() && Stk.top() == '(')
			{
				Stk.pop();
			}
			else
			{
				return false;
			}
		}

		else if (a == ']')
		{
			if (!Stk.empty() && Stk.top() == '[')
			{
				Stk.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return Stk.empty();
}

int main()
{
	while (1)
	{

		getline(cin, S);

		if (S == ".")
		{
			return 0;
		}
		Check(S) ? cout << "yes\n" : cout << "no\n";
		
	}

}