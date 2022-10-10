#include "bits/stdc++.h"

using namespace std;

int Map[104][104], Visit[104][104], x, y,  Nx, Ny, XNum, YNum;
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };

int main()
{
	cin >> YNum >> XNum;

	for (int i = 1; i <= YNum; ++i)
	{
		for (int j = 1; j <= XNum; ++j)
		{
			scanf_s("%1d", &Map[i][j]);
		}
	}

	queue<pair<int, int>>q;
	q.push({ 1, 1 });
	Visit[1][1] = 1;

	while (q.size())
	{

		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			Ny = y + Dy[i];
			Nx = x + Dx[i];

			if (Ny < 1 || Nx < 1 || Nx >XNum || Ny > YNum || (Map[Ny][Nx] == 0))continue;
			if (Visit[Ny][Nx] != 0)continue;
			Visit[Ny][Nx] = Visit[y][x] + 1;
			q.push({ Ny, Nx });
		}
	}
	cout << Visit[YNum][XNum];
}