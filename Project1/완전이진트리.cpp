#include<bits/stdc++.h>

using namespace std;

int Map[1024];
int K;
vector<int>Ret[20];

void go(int S, int E, int Index)
{

	if (S == E)
	{
		Ret[Index].push_back(Map[E]);
		return;
	}
	int Mid = (S + E) / 2;
	Ret[Index].push_back(Map[Mid]);
	go(S, Mid - 1, Index - 1);
	go(Mid + 1, E, Index - 1);
}

int main()
{
	cin >> K;

	int End = pow(2, K) - 1;
	for (int i = 1; i <= End; ++i)
	{
		cin >> Map[i];
	}

	go(1, End, K);

	for (int i = K; i > -1; i--) {
		for (int j : Ret[i]) {
			cout << j << " ";
		}
		cout << "\n";
	}

}