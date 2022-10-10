#include "bits/stdc++.h"

using namespace std;

int XSize, YSize, X, Y, Number;
int Map[54][54];
int Dy[4] = { -1, 0, 1, 0 };
int Dx[4] = { 0, 1, 0, -1 };
int NumXY[54][54];

int main()
{
	cin >> XSize >> YSize >> Number;

	


	for (int j = 0; j < Number; ++j)
	{
		cin >> X >> Y;
		Map[Y][X] = 1;
	}
	for (int i = 0; i < YSize; ++i)
	{
		for (int j = 0; j < XSize; ++j)
		{
			cout << Map[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;

}