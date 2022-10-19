#include <bits/stdc++.h>

using namespace std;


int H, W;
string S;
int A[104][104];

int main()
{
	cin >> H >> W;

	for (int i = 0; i < H; ++i)
	{
		cin >> S;
		for (int j = 0; j < W; ++j)
		{
			if (S[j] == '.')
			{
				A[i][j] = -1;
			}

			else
			{
				A[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < H; ++i)
	{

		for (int j = 0; j < W; ++j)
		{
			if (A[i][j] == 0)
			{
				
				int cnt = 1;
				while (A[i][j + 1] == -1)
				{
					A[i][j + 1] = cnt++;
					++j;
				}
			}
		}
	}
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}