#include <bits/stdc++.h>

using namespace std;

int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int Ny, Nx, N, L, R;
int Map[54][54];
int Visited[54][54];
int Temp[54][54];
int Day = 0;
int Order = 1;
bool Change;
vector < pair<int, int>>G[3000];
int Ret;

void DFS(int y, int x)
{

	for (int i = 0; i < 4; ++i)
	{
		Ny = Dy[i] + y;
		Nx = Dx[i] + x;
		if (Nx < 0 || Ny < 0 || Nx >= N || Ny >= N || Visited[Ny][Nx] == 1)continue;
		if (L <= abs(Map[Ny][Nx] - Map[y][x]) && abs(Map[Ny][Nx] - Map[y][x]) <= R)
		{
			Change = true;
			Visited[Ny][Nx] = 1;
			G[Order].push_back(make_pair(Ny, Nx));
			Ret += Map[Ny][Nx];
			DFS(Ny, Nx);
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> L >> R;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
			cin >> Map[i][j];
	}
	while (1)
	{
		Change = false;
		memset(Visited, 0, sizeof(Visited));
		
		Order = Day * 10 + 1;
		for (int i = 0; i < N; ++i)
		{
			for (int j = 0; j < N; ++j)
			{
				Ret = 0;
				if (Visited[i][j] == 1)continue;
				DFS(i, j);
				if (G[Order].size())
				{
					int  TempTemp = Ret / G[Order].size();


					for (auto A : G[Order])
					{
						Map[A.first][A.second] = TempTemp;
					}
					++Order;
				
				}
			}

		}
		if (Change == false)
		{
			break;
		}
		++Day;
	}
	cout << Day;
}