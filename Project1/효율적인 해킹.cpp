#include <bits/stdc++.h>

using namespace std;

int N, M;

vector <int> ads[10004];

int A, B;

int Go(int here)
{
	for (auto there : ads[here])
	{
			
		Go(there);
	}

	return
}
int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		cin >> A >> B;
	}

	int ans = 0;
	for (int i = 0; i < N; ++i)
	{
		ans = max(ans, Go(i));
	}

}