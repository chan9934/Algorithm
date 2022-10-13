#include "bits/stdc++.h"

using namespace std;

int n;
string s;
char Map[70][70];





string Go(int y, int x, int n)
{
	if (n == 1)
	{
		return string(1, Map[y][x]);
	}
	int Dy[4] = { 0, 0, +n / 2, +n / 2 };
	int Dx[4] = { 0, +n / 2, +n / 2, 0 };

	char b = Map[y][x];
	string ret =  "";
	for (int i = 0; i < 4; ++i)
	{
		if (b != Map[y + Dy[i]][x + Dx[i]])
		{
			ret += '(';
			ret += Go(y, x, n / 2);
			ret += Go(y, x + n/2, n / 2);
			ret += Go(y + n / 2, x, n / 2);
			ret += Go(y + n / 2, x + n / 2, n / 2);
			ret += ')';
		
			return ret;
		}
	}
	
	return string(1, Map[y][x]);


}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		for (int j = 0; j < n; ++j)
		{
			
			Map[i][j] = s[j];
		}
	}

	cout << Go(0, 0, n);
}
