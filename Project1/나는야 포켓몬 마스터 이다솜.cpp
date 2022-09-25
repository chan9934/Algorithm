#include"bits/stdc++.h"

using namespace std;

int N, M;
map<int, string>Poc1;
map<string, int>Poc2;
string Ret;
int main()
{
	cin >> N >> M;
	for (int i = 1; i <= N; ++i)
	{
		string Temp;
		cin >> Temp;
		Poc1[i] = Temp;
		Poc2[Temp] = i;
	}

	for (int i = 1; i <= M; ++i)
	{
		cin >> Ret;
		if (Ret[0] < 65)
		{
			cout << Poc1[stoi(Ret)] << "\n";
		}
		else
		{
			cout << Poc2[Ret] << "\n";
		}
	}
}