#include "bits/stdc++.h"

using namespace std;

int Nx, Ny, N, H,  MMAP[104][104], Ret[104], Visited[104][104], ret;

int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

void DFS(int y, int x, int h)
{
	Visited[y][x] = 1;
	for (int i = 0; i < 4; ++i)
	{
		Ny = y + Dy[i];
		Nx = x + Dx[i];

		if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= N) continue;
		if (!Visited[Ny][Nx] && MMAP[Ny][Nx] > h) DFS(Ny, Nx, d);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >>
				MMAP[i][j];
		}
	}

	Ret[0] = 1;
	for (int h = 1; h <= 101; ++h)
	{
		fill(&Visited[0][0], &Visited[0][0] + 104 * 104, 0);
		
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{

				if (MMAP[i][j] <= h || Visited[i][j])continue;
					DFS(i, j, h);
					++Ret[h];
				
			}
			
		}
		if (Ret[h - 1] > Ret[h])
		{
			cout << Ret[h - 1];
			return 0;
		}

	}
	return 0;
}