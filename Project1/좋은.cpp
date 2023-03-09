//#include<bits/stdc++.h>
//
//using namespace std;
//
//int N, Ret;
//
//string Str[104];
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	for (int i = 1; i <= N; ++i)
//	{
//
//		cin >> Str[i];
//
//		while (1)
//		{
//			if (Str[i].find("AA") != string::npos)
//			{
//				int a = Str[i].find("AA");
//				Str[i].erase(a, 2);
//			}
//			else if (Str[i].find("BB") != string::npos)
//			{
//				int a = Str[i].find("BB");
//				Str[i].erase(a, 2);
//			}
//			else
//			{
//				if (Str[i].begin() == Str[i].end())
//				{
//					++Ret;
//					break;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//
//	}
//
//	cout << Ret;
//
//	return 0;
//
//}
#include <bits/stdc++.h>

using namespace std;

int N, Ret;

string Str;

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> Str;

		stack<char>Stk;

		for (char c : Str)
		{
			if (Stk.size() && Stk.top() == c)
			{
				Stk.pop();
			}

			else
			{
				Stk.push(c);
			}
		}
		if (Stk.size() == 0)
		{
			++Ret;
		}
	}

	cout << Ret;

	return 0;
}