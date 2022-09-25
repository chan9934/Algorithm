#include<bits/stdc++.h>

using namespace std;

int a, b;




int main()
{
	
	cin >> a;

	for (int i = 0; i < a; ++i)
	{

		int ret = 1;
		cin >> b;
		string Str1;
		string Str2;
		map<string, int>Ppair;
		for (int i = 0; i < b; ++i)
		{

			cin >> Str1 >> Str2;
			
			Ppair[Str2] += 1;
		


		}
		for (auto c : Ppair)
		{
			ret *= (Ppair[c.first] + 1);
		}
		
		cout << ret-1 << "\n";


	}
	
}