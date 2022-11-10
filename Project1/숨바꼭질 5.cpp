#include<bits/stdc++.h>

using namespace std;

int N, K;
int Visited[2][500004];
int Turn;

int main()
{
	cin >> N >> K;
	if (N == K)
	{
		cout << 0;
		return 0;
	}

	queue<int>Q;
	Q.push(N);
	Visited[0][N] = 1;
	bool Ok = false;

	while (Q.size())
	{
		
		if (Visited[Turn % 2][K])
		{
			Ok = true;
			break;
		}
		++Turn;
		K += Turn;
		if (K > 500000)
		{
			cout << -1;
			return 0;
		}
		
		int QSize = Q.size();
		
		for (int i = 0; i < QSize; ++i)
		{
			int Current = Q.front();
			Q.pop();
			for (int Nx : { Current + 1, Current - 1, Current * 2})
			{
				if (Nx < 0 || Nx > 500000 || Visited[Turn % 2][Nx])continue;

				if (Nx == K)
				{
					Ok = true;
					break;
				}
				Visited[Turn % 2][Nx] = 1;
				Q.push(Nx);
			}
			if (Ok)
			{
				break;
			}
		}
		if (Ok)
		{
			break;
		}
		
	}
	if (Ok)
		cout << Turn;
	else
		cout << -1;

	return 0;
}