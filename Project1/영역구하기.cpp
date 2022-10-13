#include "bits/stdc++.h"

using namespace std;

int M, N, K, x1, x2, yy1, y2, Nx, Ny, Ret;

int MMAP[104][104];
int Visited[104][104];
int B[104];
vector <int > BB;
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

void DFS(int b, int a, int Ret)
{
	Visited[b][a] = 1;
	for (int i = 0; i < 4; ++i)
	{
		Nx = a + Dx[i];
		Ny = b + Dy[i];

		if (Nx < 0 || Ny < 0 || Nx >= N || Ny >= M || Visited[Ny][Nx] == 1 || MMAP[Ny][Nx] == 1)continue;
		DFS(Ny, Nx, Ret);
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
		cin >> x1 >> yy1 >> x2 >> y2;


		for (int l = yy1; l < y2; ++l)
		{
			for (int j = x1; j < x2; ++j)
			{
				MMAP[l][j] = 1;
			}
		}
	}

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (Visited[i][j] == 1 || MMAP[i][j] == 1)continue;
			DFS(i, j, Ret);
			BB.push_back(B[Ret]);
			++Ret;
		}
	}
	sort(BB.begin(), BB.begin() + Ret);
	cout << Ret << "\n";
	for (int i : BB)
	{
		cout << i + 1 << " ";
	}

}