#include "bits/stdc++.h"

using namespace std;

int N;
char Map[64][64];

char S;

string C;



string go(int y, int x, int Z)
{
	if (Z == 1)
	{
		return string(1, Map[y][x]);
	}
	S = Map[y][x];
	string Ret = "";
	for (int i = y; i < y + Z; ++i)
	{
		for (int j = x; j < x + Z; ++j)
		{
			if (S != Map[i][j])
			{
				Ret += '(';

				Ret += go(y, x, Z / 2);
				Ret += go(y, x + Z / 2, Z / 2);
				Ret += go(y + Z / 2, x, Z / 2);

				

				Ret += go(y + Z / 2, x + Z / 2, Z / 2);

				Ret += ')';

				return Ret;
			}

		}
	}

	return string(1, Map[y][x]);
	
}

int main()
{

	cin >> N;

	for (int i = 0; i < N; ++i)
	{

		cin >> C;
		for (int j = 0; j < N; ++j)
		{
			Map[i][j] = C[j];
		}
	}

	cout << go(0, 0, N);
}