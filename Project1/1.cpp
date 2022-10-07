	#include<bits/stdc++.h>

	using namespace std;

	typedef long long ll;

	int A;
	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		while (cin >> A)
		{
			
			ll Sum = 1;
			int i = 1;
			while(true)
			{
				
				if (Sum % A == 0)
				{
					cout << i << "\n";
					break;
				}
				Sum = Sum * 10 + 1;
				Sum %= A;
				++i;
			}
		}
		return 0;
	

	}