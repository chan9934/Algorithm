#ifdef NDEBUG
#ifdef _DEBUG
#undef _DEBUG
#endif
#endif
#include<bits/stdc++.h>

using namespace std;

int N, M;

int Map[104][104];
int visited[104][104];

int Ny, Nx;
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

vector<pair<int, int>>V;

void go(int y, int x)
{

	visited[y][x] = 1;

	if (Map[y][x] == 1)
	{
		V.push_back({ y, x });
		Map[y][x] = 0;
		return;
	}

	for (int i = 0; i < 4; ++i)
	{
		Ny = y + Dy[i];
		Nx = x + Dx[i];
		if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= M || visited[Ny][Nx] == 1) continue;
		go(Ny, Nx);
	}
	return;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> Map[i][j];
		}
	}
	int ans = 0;
	int VSz1 = 0;
	int VSz2 = 0;
	int result = 0;
	while (1)
	{
		fill(&visited[0][0], &visited[N][M] + 104*104, 0);
		go(0, 0);
		if (VSz1 == V.size())
		{
			result = VSz1 - VSz2;
			break;
		}
		++ans;
		VSz2 = VSz1;
		VSz1 = V.size();
	}
	cout << ans << result;
}