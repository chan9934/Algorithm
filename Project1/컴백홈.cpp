#include<bits/stdc++.h>

using namespace std;

int N, M, K;

int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

int Visited[10][10];
char Map[10][10];

int Ny, Nx;

int Go(int Y, int X)
{
	if (Y == 0 && X == M - 1)
	{
		if (Visited[Y][X] == K)
		{
			return 1;

		}
		else
			return 0;
	}
	int Ret = 0;
	for (int i = 0; i < 4; ++i)
	{
		Ny = Dy[i] + Y;
		Nx = Dx[i] + X;

		if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= M || Visited[Ny][Nx] != 0) continue;
		if (Map[Ny][Nx] == 'T')continue;
		Visited[Ny][Nx] = Visited[Y][X] + 1;
		Ret += Go(Ny, Nx);
		Visited[Ny][Nx] = 0;
	}
	return Ret;
}

int main()
{
	cin >> N >> M >> K;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Map[i][j];
		}
	}

	Visited[N - 1][0] = 1;


	cout << Go(N - 1, 0);
}