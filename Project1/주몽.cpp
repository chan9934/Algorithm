	#include<bits/stdc++.h>

	using namespace std;

	int N, M, K;
	int Ret;
	vector<int> T;
	int main()
	{
		ios_base::sync_with_stdio;

		cin.tie(NULL);
		cout.tie(NULL);

		cin >> N;
		cin >> M;

		for (int i = 0; i < N; ++i)
		{
			cin >> K;
			T.emplace_back(K);
		}

		sort(T.begin(), T.end());

		for (int i = 0; i < N; ++i)
		{
			for (int j = i + 1; j < N; ++j)
			{
				if (M == T[i] + T[j])
				{
					++Ret;
				}
			}
		}
		cout << Ret;
		return 0;
	}