#include <bits/stdc++.h>

using namespace std;

int N, M, L;

int Map[54][54];

vector<pair<int,int>>V;
vector<pair<int,int>>H;
vector<int>Min;
int Result = 1000000;

void Combi(int Start, vector<int>B)
{
	if (B.size() == M)
	{
		fill(Min.begin(), Min.end(), 100);
		for (auto a : B)
		{
			for (int i = 0; i < H.size(); ++i)
			{
				Min[i] = min(Min[i], abs(H[i].first - V[a].first) + abs(H[i].second - V[a].second));
			}
		}
		int Temp = 0;
		for (auto Ret : Min)
		{
			Temp += Ret;
			
		}
		Result = min(Result, Temp);
		return;
	}

	for (int i = Start + 1; i < V.size(); ++i)
	{
		B.push_back(i);
		Combi(i, B);
		B.pop_back();
	}
	return;
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> L;
			if (L == 2)
			{
				V.push_back(make_pair(i, j));
			}
			else if (L == 1)
			{
				H.push_back(make_pair(i, j));
				Min.push_back(100);
			}
		}
	}

	
	vector<int> B;
	Combi(-1, B);
	
	cout << Result;

}