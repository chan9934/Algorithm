#include<bits/stdc++.h>

using namespace std;

char Map[24][24];
char AlVisited[100];
int Visited[24][24];
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int Ny, Nx;
int R, C;
int y, x;
bool Success;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> R >> C;

	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin >> Map[i][j];
			
		}
	}
	queue<pair<int, int>>Q;
	Q.push({ 0, 0 });
	Visited[0][0] = 1;
	AlVisited[Map[0][0]] = 1;

	int Cnt = 1;
	while (Q.size())
	{
		++Cnt;
		Success = false;
		int QSize = Q.size();
		for (int j = 0; j < QSize; ++j)
		{
			tie(y, x) = Q.front();
			
			Q.pop();
			for (int i = 0; i < 4; ++i)
			{
				Ny = Dy[i] + y;
				Nx = Dx[i] + x;
				if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C ||  Visited[Ny][Nx])continue;
				if (AlVisited[Map[Ny][Nx]] && AlVisited[Map[Ny][Nx]] != Cnt)continue;

				AlVisited[Map[Ny][Nx]] = Cnt;
				Visited[Ny][Nx] = Cnt;
				Q.push({ Ny, Nx });
				Success = true;
			}
		}
		if (Success == false)
		{
			--Cnt;
		}
	}
	cout << Cnt;
}