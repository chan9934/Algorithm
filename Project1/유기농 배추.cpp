	#include "bits/stdc++.h"

	using namespace std;

	int XSize, YSize, X, Y, Number, Ny, Nx,  Repeat;
	int MMAP[54][54];
	int Visited[54][54];
	int Dy[4] = { -1, 0, 1, 0 };
	int Dx[4] = { 0, 1, 0, -1 };

	void DFS(int B, int A)
	{
		Visited[B][A] = 1;

		for (int i = 0; i < 4; ++i)
		{
			Ny = B + Dy[i];
			Nx = A + Dx[i];
			if (Ny < 0 || Nx < 0 || Ny >= YSize || Nx >= XSize)continue;
			if (MMAP[Ny][Nx] == 1 && !(Visited[Ny][Nx]))
			{
			
				DFS(Ny, Nx);
			}
		}

	}


	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		cin >> Repeat;
		for (int i = 0; i < Repeat; ++i)
		{
			int Ret = 0;
			fill(&MMAP[0][0], &MMAP[0][0] + 54 * 54, 0);
			fill(&Visited[0][0], &Visited[0][0] + 54 * 54, 0);
			cin >> XSize >> YSize >> Number;

			for (int j = 0; j < Number; ++j)
			{
				cin >> X >> Y;
				MMAP[Y][X] = 1;
			}

			for (int i = 0; i < YSize; ++i)
			{
				for (int j = 0; j < XSize; ++j)
				{
					if (MMAP[i][j] == 1 && Visited[i][j] == 0)
					{
						DFS(i, j);
						++Ret;
					}
				}
			}
			cout << Ret << "\n";
		}
		return 0;

	}