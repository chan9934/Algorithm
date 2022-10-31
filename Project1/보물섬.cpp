#include<bits/stdc++.h>

using namespace std;

int N, M;

char Map[54][54];
int Visited[54][54];

int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int Ny, Nx;
int Result;
int y, x;

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

	int Result = 0;
	
	for (int i = 0; i < N; ++i)
	{
	
		for (int j = 0; j < M; ++j)
		{
			if (Map[i][j] != 'L')continue;
			queue<pair<int, int>>Q;
			memset(Visited, 0, sizeof(Visited));
			Q.push(make_pair(i, j));
			while (Q.size())
			{
				tie(y, x) = Q.front();
				Q.pop();
				for (int k = 0; k < 4; ++k)
				{
					Ny = y + Dy[k];
					Nx = x + Dx[k];
					if (Ny < 0 || Nx < 0 || Ny >= N || Nx >= M || Visited[Ny][Nx] != 0 )continue;
					if (Ny == i && Nx == j)continue;
					if (Map[Ny][Nx] == 'L')
					{
						Q.push(make_pair(Ny, Nx));
						Visited[Ny][Nx] = Visited[y][x] + 1;
						Result = max(Result, Visited[Ny][Nx]);
					}

				}
			
			}
	/*		for (int i = 0; i < N; ++i)
			{
				for (int j = 0; j < M; ++j)
				{
					cout << Visited[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "\n";
			cout << "\n";
			cout << "\n";
			*/


		}
	}
	cout << Result;
	
}