#include <bits/stdc++.h>

using namespace std;

int N, M;

vector <int> ads[10004];
int Visited[10004];

int A, B;

int Ans;
vector <pair<int, int>>Result;
int Temp;
vector<int>Last;

void Go(int here)
{
	Visited[here] = 1;
	++Ans;
	if (ads[here].size() == 0)
	{
		return;
	}
	for (auto there : ads[here])
	{
		if (Visited[there] == 1) continue;
	
		Go(there);
	}

	return;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;

	for (int i = 0; i < M; ++i)
	{
		cin >> A >> B;
		ads[B].push_back(A);
	}
	for (int i = 1; i <= N; ++i)
	{
		fill(&Visited[0], &Visited[0] + 10004, 0);
		Ans = 0;
		Go(i);
		Result.push_back(make_pair(i, Ans));
		Temp = max(Temp, Ans);
	}

	for (auto C : Result)
	{
		
		if (C.second == Temp)
		{
			Last.push_back(C.first);
		}
	}
	sort(Last.begin(), Last.end());
	for (int C : Last)
	{
		cout << C << " ";
	}
	

}