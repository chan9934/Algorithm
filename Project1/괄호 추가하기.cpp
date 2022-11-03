#include <bits/stdc++.h>

using namespace std;

int N;
string S;
vector<char> Operator;
vector<int> Number;
int Result = -90000;

int Oper(char a, int x, int y)
{
	if (a == '+')
	{
		return x + y;
	}
	else if (a == '-')
	{
		return x - y;
	}
	else if (a == '*')
	{
		return x * y;
	}
}

void Go(int Index, int Ret)
{
	if (Index + 1 == Number.size())
	{
		Result = max(Result, Ret);
		return;
	}

	Go(Index + 1, Oper(Operator[Index], Ret, Number[Index + 1]));

	if (Index + 3 <= Number.size())
	{
		int Temp = Oper(Operator[Index + 1], Number[Index + 1], Number[Index + 2]);
		Go(Index + 2, Oper(Operator[Index], Ret, Temp));
	}
	return;

}

int main()
{
	cin >> N;
	cin >> S;
	for (int i = 0; i < N; ++i)
	{
		if (i & 1)
		{
			Operator.push_back(S[i]);
		}
		else
		{
			Number.push_back(S[i] - '0');
		}
	}
	Go(0, Number[0]);
	cout << Result;

	return 0;
}