#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	int Count = 0;
	int Number = 665;
	string Temp = "";
	while (Count != n)
	{
		++Number;
		Temp = to_string(Number);
		if (Temp.find("666") != -1)
		{
			++Count;
		}
		
	}
	cout << Number;
}