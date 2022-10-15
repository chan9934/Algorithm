#include <bits/stdc++.h>

using namespace std;

int L, M, N, D, A, Ret;

int main()
{
	cin >> N >> M;

	cin >> D;

	int R = L + M -1;

	for (int i = 0; i < D; ++i)
	{
		cin >> A;
		int RealA = A - 1;

		if (RealA < L)
		{
			Ret += L - RealA;
			
			L = RealA;
			R = L + M - 1;
			
		}
		
		else if (R < RealA)
		{
			Ret += RealA - R;
			R = RealA;
			L = R - M + 1;
		}
	}

	cout << Ret;
}