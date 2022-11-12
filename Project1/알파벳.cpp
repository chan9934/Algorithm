#include<bits/stdc++.h>

using namespace std;

char Map[24][24];
char AlVisited[100];
int Visited[30];
int Visited2[24][24];
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int Ny, Nx;
int R, C;
int Result;
void go(int y, int x, int c)
{
	Result = max(Result, c);
	
	for (int i = 0; i < 4; ++i)
	{
		Ny = y + Dy[i];
		Nx = x + Dx[i];
		if (Ny < 0 || Nx < 0 || Ny >= R || Nx >= C)continue;
	
		int Temp = (int)(Map[Ny][Nx] - 'A');
		if (Visited[Temp])continue;
		Visited[Temp] = 1;
		go(Ny, Nx, c + 1);
		Visited[Temp] = 0;
	}

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
		}
	}
	Visited[(int)(Map[0][0] - 'A')] = 1;
	go(0, 0, 1);
	cout << Result;
}