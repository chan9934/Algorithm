#include <bits/stdc++.h>

using namespace std;


long long X, Y, Z, D, Ret;

int i = 0;

int main()
{
	cin >> X >> Y >> Z;

	D = X % Z;

	while (D * (long long)(pow(X, i) <= Z))
	{
		++i;
	}

	Ret = D * (long long)(pow(X, i%4));
}