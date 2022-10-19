#include<bits/stdc++.h>

using namespace std;

string S;

int N;

string Temp;

vector<string>Ret;

bool cmp(string a, string b) {
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
void go()
{
	while (1)
	{
		if (Temp.size() && Temp.front() == '0')
		{
			Temp.erase(Temp.begin());
		}
		else
		{
			break;
		}
	}
	if (Temp.size() == 0)
	{
		Temp += "0";
	}

	Ret.push_back(Temp);
	Temp = "";

}
int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> S;

		Temp = "";
		bool Zero = false;

		for (auto it : S)
		{
			if (it < 65)
			{
				Temp += it;
			}

			else
			{
				if (Temp.size())
				{
					
					go();
						
				}
				
			}
		}
		if (Temp.size())
		{
			go();
		}
	}
	sort(Ret.begin(), Ret.end(), cmp);

	for (auto it : Ret)
	{
		cout << it << "\n";
	}
	return 0;
}