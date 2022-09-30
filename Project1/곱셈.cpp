#include <bits/stdc++.h>

using namespace std;

int X, Y, Z;

int D = 1;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> X >> Y >> Z;

	for (int i = 0; i < Y; ++i)
	{
		D = (D * X)% Z;
	}
	cout << D;
}