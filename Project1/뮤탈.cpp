#include<bits/stdc++.h>

using namespace std;

int _a[6][3] =
{
	{9, 3, 1},
	{9, 1, 3},
	{3, 9, 1},
	{3, 1, 9},
	{1, 3, 9},
	{1 ,9, 3}
};

int Visited[64][64][64];

struct A
{
	int a;
	int b;
	int c;
};

int N, Hp[3];

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> Hp[i];
	}

	queue<A>Q;
	Q.push({ Hp[0], Hp[1], Hp[2] });
	Visited[Hp[0]][Hp[1]][Hp[2]] = 1;

	while (Q.size())
	{
		if (Visited[0][0][0])break;
		int a = Q.front().a;
		int b = Q.front().b;
		int c = Q.front().c;

		Q.pop();
		
		for (int i = 0; i < 6; ++i)
		{
			int Na = max(0, a - _a[i][0]);
			int Nb = max(0, b - _a[i][1]);
			int Nc = max(0, c - _a[i][2]);
			if (Visited[Na][Nb][Nc] != 0)continue;
			Visited[Na][Nb][Nc] = Visited[a][b][c] + 1;
			Q.push({ Na, Nb, Nc });

		}
	}
	cout << Visited[0][0][0] - 1;

}