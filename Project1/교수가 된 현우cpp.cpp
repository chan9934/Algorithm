#include <bits/stdc++.h>

using namespace std;

int N;
int Count;
int Ret;
int Number;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> Number;
	for (int j = 0; j < Number; ++j)
	{
		cin >> N;
		int A = 5;
		Count = 0;
		Ret = 0;
		
			while (A <= N)
			{
				++Count;
				A *= 5;
			}

			int B = 1;
			for (int i = 0; i < Count; ++i)
			{
				B *= 5;
				Ret += N / B;
			}
			cout << Ret << "\n";
		
	}
}	