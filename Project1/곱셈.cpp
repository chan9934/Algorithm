#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll A, B, C;

ll Comb(ll A, ll B)
{
	
	if (B == 1)
	{
		return A % C;
	}

	ll Ret = Comb(A, B / 2);

	Ret = (Ret * Ret) % C;
	if (B & 1)
	{
		
		Ret = (Ret * A ) % C;
	}

	return Ret;

}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> A >> B >> C;

	cout << Comb(A, B);

	return 0;
}