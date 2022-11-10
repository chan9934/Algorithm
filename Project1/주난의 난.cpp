#include <bits/stdc++.h>

using namespace std;

#define y1 dsaf

int N, M;
int x1, y1, x2, y2;
int y, x;
char Map[304][304];
int Visited[304][304];
int Ny, Nx;
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };


int main()
{
	cin >> N >> M;
	cin >> y1 >> x1;
	cin >> y2 >> x2;

	--y1;
	--x1;
	--y2;
	--x2;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Map[i][j];
		}
	}
	queue<pair<int, int>>Q;
	int turn = 0;
	Visited[y1][x1] = 1;
	Q.push({ y1, x1 });
	bool Ok = false;
	
	while (1)
	{
		queue<pair<int, int>>P;
		++turn;

		while (Q.size())
		{
			tie(y, x) = Q.front();
			Q.pop();


			for (int i = 0; i < 4; ++i)
			{
				Ny = y + Dy[i];
				Nx = x + Dx[i];
				if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= M)continue;
				if (Visited[Ny][Nx]) continue;
				if (Map[Ny][Nx] == '#')
				{
					Ok = true;
					break;
				}
				else if (Map[Ny][Nx] != '1')
				{
					Visited[Ny][Nx] = turn;
					Q.push({ Ny, Nx });
				}
				else
				{
					Visited[Ny][Nx] = turn;
					P.push({ Ny, Nx });
				}
			}
			if (Ok)break;

		}
		if (Ok)break;
		Q = P;
	}
	cout << turn;
}