//#include"bits/stdc++.h"
//
//using namespace std;
//
//int N, K;
//
//int Temp[100004];
//int Sum;
//vector<int>Ret;
//int best;
//
//int main()
//{
//	cin >> N >> K;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Temp[i];
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		Sum += Temp[i];
//		if (i >= K)
//		{
//			Sum -= Temp[i - K];
//			if (best < Sum)
//			{
//				best = Sum;
//			}
//		}
//		if (i == K-1)
//		{
//			best = Sum;
//		}
//		
//	}
//	cout << best;
//
//}
#include"bits/stdc++.h"

using namespace std;
int N, K, PSum[100001], a, ret = 10000004;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> N >> K;

	for (int i = 1; i <= N; ++i)
	{

		cin >> a;
		PSum[i] = PSum[i - 1] + a;
	}

	for (int i = K; i <= N; ++i)
	{
		
		ret = max(ret, PSum[i] - PSum[i - K]);
	}
	cout << ret << "\n";

	return 0;
}

