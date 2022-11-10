#include<bits/stdc++.h>
#define y1 sadf

using namespace std;

char Map[1504][1504];
int Visited[1504][1504];

int R, C;
queue<pair<int, int>>P1;

queue<pair<int, int>>P2;
int Ny, Nx;

int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int y, x;
int x1, y1, x2, y2;
int main()
{
	cin >> R >> C;
	int Cnt = 0;
	for (int i = 0; i < R; ++i)
	{
		for (int j = 0; j < C; ++j)
		{
			cin >> Map[i][j];
			if (Map[i][j] == '.')
			{
				P1.push({ i, j });
			}
			else if (Map[i][j] == 'L')
			{
				if (Cnt == 0)
				{
					Map[i][j] = 1;
					++Cnt;
				}
				else
				{
					Map[i][j] = 2;
				}
					
			}
		}
	}
	int turn = 0;
	bool bL1 = false;
	bool bL2 = false;

	
	while (1)
	{
		queue<pair<int, int>>P1Temp;
		++turn;
		while (P1.size())
		{
			tie(y, x) = P1.front();

			P1.pop();
			for (int i = 0; i < 4; ++i)
			{
				Ny = y + Dy[i];
				Nx = x + Dx[i];

				if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C || Visited[Ny][Nx] == 1)continue;
				if (Map[Ny][Nx] == '.')
				{
					Visited[Ny][Nx] = 1;
					P1.push({ Ny, Nx });
				}
				else if(Map[Ny][Nx] == 'X')
				{
					Visited[Ny][Nx] = 1;
					P1Temp.push({ Ny, Nx });
				}

				else if (Map[Ny][Nx] == 1)
				{
					Visited[Ny][Nx] = 1;
					P1.push({ Ny, Nx });
					bL1 = true;
					if (bL1 && bL2)
					{
						cout << turn;
						return 0;
					}
				}
				else if (Map[Ny][Nx] == 2)
				{
					Visited[Ny][Nx] = 1;
					P1.push({ Ny, Nx });
					bL2 = true;
					if (bL1 && bL2)
					{
						cout << turn;
						return 0;
					}
				}
			}

		}
		P1 = P1Temp;
	}
	

}