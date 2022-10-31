#include<bits/stdc++.h>

using namespace std;

char Map[1004][1004];
int Visited[1004][1004];
int FVisited[1004][1004];
int TempVisited[1004][1004];

int R, C;

int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int Ny, Nx;

int Jy, Jx;
int y, x;
int Fy, Fx;
vector<pair<int, int>>V;
vector<pair<int, int>>FV;

int main()
{
	cin >> R >> C;
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin >> Map[i][j];
			if (Map[i][j] == 'J')
			{
				Jy = i;
				Jx = j;
			}
			if (Map[i][j] == 'F')
			{
				FV.push_back({ i, j });
			}
		}
	}

	queue<pair<int, int>>Q;
	Q.push(make_pair(Jy, Jx));
	Visited[Jy][Jx] = 1;

	while (Q.size())
	{
		tie(y, x) = Q.front();
		
		Q.pop();

		for (int i = 0; i < 4; ++i)
		{
			Ny = Dy[i] + y;
			Nx = Dx[i] + x;
			if (Map[Ny][Nx] == '\0')
			{
				V.push_back(make_pair(y, x));
			}

			if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C || Visited[Ny][Nx] != 0)
			{
				continue;
			}

			if (Map[Ny][Nx] != '.') continue;

			Q.push(make_pair(Ny, Nx));
			Visited[Ny][Nx] = Visited[y][x] + 1;
		}
	}	
	
	fill(&FVisited[0][0], &FVisited[0][0] + 1004 * 1004, 5000);
	
	for (auto A : FV)
	{
		
		memset(TempVisited, 0, sizeof(TempVisited));
		queue<pair<int, int>>QF;
		QF.push(make_pair(A.first, A.second));
		TempVisited[A.first][A.second] = 1;
		while (QF.size())
		{
			tie(y, x) = QF.front();

			QF.pop();

			for (int i = 0; i < 4; ++i)
			{
				Ny = Dy[i] + y;
				Nx = Dx[i] + x;

				if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C || TempVisited[Ny][Nx] != 0)
				{
					continue;
				}

				if (Map[Ny][Nx] != '.') continue;

				QF.push(make_pair(Ny, Nx));
				TempVisited[Ny][Nx] = TempVisited[y][x] + 1;
				if (TempVisited[Ny][Nx] < FVisited[Ny][Nx])
				{
					FVisited[Ny][Nx] = TempVisited[Ny][Nx];
				}
			}
		}
	}
	int Min = 5000;
	for (auto A : V)
	{
		if (Visited[A.first][A.second] < FVisited[A.first][A.second])
		{
			Min = min(Min, Visited[A.first][A.second]);
		}
	}
	if (Min == 5000)
	{
		cout << "IMPOSSIBLE";
	}
	else
	{
		cout << Min;
	}

}