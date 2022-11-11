#include<bits/stdc++.h>

using namespace std;

int R, C;
int y, x;
char Map[1504][1504];
int SwanVisited[1504][1504];
int WaterVisited[1504][1504];
queue<pair<int, int>>WaterQ;
queue<pair<int, int>>WaterTempQ;
queue<pair<int, int>>SwanQ;
queue<pair<int, int>>SwanTempQ;
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int Ny, Nx;
int Day;

bool SwanMove(queue<pair<int, int>> Q)
{
	while (Q.size())
	{
		
		tie(y, x) = Q.front();
		Q.pop();
		for (int i = 0; i < 4; ++i)
		{
			Ny = Dy[i] + y;
			Nx = Dx[i] + x;
			if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C || SwanVisited[Ny][Nx] == 1) continue;
			SwanVisited[Ny][Nx] = 1;
			if (Map[Ny][Nx] == 'L')
			{
				return true;
			}
			else if (Map[Ny][Nx] == '.')
			{
				
				Q.push({ Ny, Nx });
			}
			else if (Map[Ny][Nx] == 'X')
			{
				SwanTempQ.push({ Ny, Nx });
			
			}
		}
	}
	return false;

}
void WaterMove(queue<pair<int, int>> Q)
{
	while (Q.size())
	{

		tie(y, x) = Q.front();
		Q.pop();
		for (int i = 0; i < 4; ++i)
		{
			Ny = Dy[i] + y;
			Nx = Dx[i] + x;
			if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C || WaterVisited[Ny][Nx] == 1) continue;
			if (Map[Ny][Nx] == 'X')
			{
				Map[Ny][Nx] = '.';
				WaterTempQ.push({ Ny, Nx });
				WaterVisited[Ny][Nx] = 1;
			}
		}
	}
}

void QClear(queue<pair<int, int>>&Q)
{
	queue<pair<int, int>>TempQ;
	swap(Q, TempQ);
}


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
			if (Map[i][j] == '.')
			{
				WaterVisited[i][j] = 1;
				WaterQ.push({ i, j });
			}
			else if (Map[i][j] == 'L' && Day == 0)
			{
				SwanQ.push({ i, j });
				WaterQ.push({ i, j });
				WaterVisited[i][j] = 1;
				SwanVisited[i][j] = 1;
				++Day;
			}
			else if (Map[i][j] == 'L' && Day == 1)
			{
				WaterQ.push({ i, j });
				WaterVisited[i][j] = 1;
			}
		}
	}
	while (1)
	{
		if (SwanMove(SwanQ)) break;
		WaterMove(WaterQ);
		WaterQ = WaterTempQ;
		SwanQ = SwanTempQ;
		QClear(WaterTempQ);
		QClear(SwanTempQ);
		
		++Day;
	}
	cout << Day-1;
}