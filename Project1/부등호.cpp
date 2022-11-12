#include <bits/stdc++.h>

using namespace std;
char Oper[10];
vector<int>Number;
int N;

int main()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> Oper[i];
	}
	stack<int>S;
	for (int i = 9; i >= 0; --i)
	{
		Number.push_back(i);
	}
	int Cnt = 0;
	while (sizeof(Number))
	{

		S.push(*(Number.begin()));

		if (Oper[Cnt] == '<')
		{
			while
			S.top() < 
		}

	}
}