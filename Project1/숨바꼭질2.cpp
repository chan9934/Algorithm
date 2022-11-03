#include <bits/stdc++.h>

using namespace std;

int N, K;
int Nx;
int Visited[100004];
int Cnt[100004];
int Ret = 987654321;

int main()
{
	cin >> N >> K;

	queue<int>Q;
	Q.push(N);
	Visited[N] = 1;
	Cnt[N] = 1;

	if (N == K)
	{
		puts("0");
		puts("1");
		return 0;
	}

	while (Q.size())
	{
		
		int x = Q.front();
		Q.pop();

		for (int i = 0; i < 3; ++i)
		{
			if (i == 0)
			{
				Nx = 2 * x;
			}
			else if (i == 1)
			{
				Nx = x + 1;
			}
			else
			{
				Nx = x - 1;
			}

			if (Nx >= 0 && Nx <= 100000)
			{
				if (Visited[Nx] == 0)
				{
					Visited[Nx] = Visited[x] + 1;
					Cnt[Nx] += Cnt[x];

					Q.push(Nx);
				}
				else if (Visited[Nx] == Visited[x] + 1)
				{
					Cnt[Nx] += Cnt[x];
				}

			}
			
		}
		
		
	}
	cout << Visited[K] - 1 << "\n";
	cout << Cnt[K];
}