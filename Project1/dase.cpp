#include "bits/stdc++.h"

using namespace std;

int M, N, K, x1, x2, y1, y2, Nx, Ny, Ret;

int Map[104][104] = { 1, };
int Visited[104][104];
int B[104];
vector <int > BB;
int Dy[4] = { 1, 0, -1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

void DFS(int a, int b, int Ret)
{
	Visited[a][b];
	for (int i = 0; i < 4; ++i)
	{
		Nx = a + Dx[i];
		Ny = b + Dy[i];

		if (Nx < 0 || Ny < 0 || Nx >= M || Ny >= N || Visited[Nx][Ny] == 1)continue;
		DFS(Nx, Ny, Ret);
		++B[Ret];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> M >> N >> K;

	for (int i = 0; i < K; ++i)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		for (int j = x1; j < x2; ++j)
		{

			for (int l = y1; l < y2; ++l)
			{
				Map[j][l] = 0;
			}
		}
	}

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (Visited[i][j] == 1 || Map[i][j] == 0)continue;
			DFS(i, j, Ret);
			BB.push_back(B[Ret]);
			++Ret;
		}
	}
	sort(BB.begin(), BB.begin() + Ret);
	cout << Ret << "\n";
	for (int i : BB)
	{
		cout << BB[i];
	}

}