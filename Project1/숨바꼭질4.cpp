#include<bits/stdc++.h>

using namespace std;

int N, K, Now;

int Visited[100004];
int Path[100004];
vector<int>V;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> K;

	queue<int> Q;
	Q.push(N);
	Visited[N] = 1;

	while (Q.size())
	{
		if (Visited[K])
		{
			
			break;
		}
		int Current = Q.front();
		Q.pop();
		for (int a : {Current + 1, Current - 1, Current * 2})
		{
			Now = a;
			if (Now < 0 || Now > 100004 || Visited[Now])continue;
			Visited[Now] = Visited[Current] + 1;
			Q.push(Now);
			Path[Now] = (Current);
			if (Now == K)
			{
				break;
			}
		}
	}
	//for (int a : Path[N])
	//{
	//	cout << a << "\n";
	//}
	//cout << "\n";
	//cout << "\n";
	//cout << "\n";
	int Result = Visited[K] - 1;
	int Temp = K;
	V.push_back(K);
	for (int i = 0; i < Result; ++i)
	{
		Temp = Path[Temp];
		V.push_back(Temp);
	}
	reverse(V.begin(), V.end());

	cout << Result << "\n";
	for (int a : V)
	{
		cout << a << " ";
	}
}