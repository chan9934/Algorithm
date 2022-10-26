#include <bits/stdc++.h>

using namespace std;

int Map[10][10];
int Temp[10][10];
int Visited[10][10];
int N, M;
int Ans;
vector<pair<int, int>>Wall;

int Ny, Nx;
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

void DFM(int y, int x)
{
	Visited[y][x] = 1;
	for (int i = 0; i < 4; ++i)
	{
		Ny = y + Dy[i];
		Nx = x + Dx[i];
		if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= M || Visited[Ny][Nx] == 1)continue;
		if (Map[Ny][Nx] == 0)
		{
			DFM(Ny, Nx);
		}
	}
	return;

}
int Solve()
{
	memset(Visited, 0, sizeof(Visited));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (Map[i][j] == 2 && Visited[i][j] != 1)
			{
				DFM(i, j);
			}
		}
	}
	int Result = 0;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			if (Map[i][j] == 0 && Visited[i][j] != 1)
			{
				++Result;
			}
		}
	}
	return Result;
	
}


int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Map[i][j];
			if (Map[i][j] == 0)
			{
				Wall.push_back(make_pair(i, j));
			}
		}
	}
	
	for (int i = 0; i < Wall.size(); ++i)
	{
		
		for (int j = i+1; j < Wall.size(); ++j)
		{
			for (int k = j+1; k < Wall.size(); ++k)
			{
				Map[Wall[i].first][Wall[i].second] = 1;
				Map[Wall[j].first][Wall[j].second] = 1;
				Map[Wall[k].first][Wall[k].second] = 1;
				Ans = max(Ans, Solve());
				Map[Wall[i].first][Wall[i].second] = 0;
				Map[Wall[j].first][Wall[j].second] = 0;
				Map[Wall[k].first][Wall[k].second] = 0;
			}
		}
	}
	cout << Ans;
}