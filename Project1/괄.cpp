//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N;
//string S;
//
//int main()
//{
//	cin >> N;
//
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> S;
//		if (S.size() & 1)
//		{
//			cout << "NO" << "\n";
//		}
//		else
//		{
//			/*cout << S.find("()") << "\n";*/
//			while (S.find("()") != string::npos)
//			{
//				S.erase(S.find("()"), 2);
//
//			}
//			if (S.size() != 0)
//			{
//				cout << "NO\n";
//			}
//			else
//			{
//				cout << "YES\n";
//			}
//		}
//	}
//}
#include <bits/stdc++.h>

using namespace std;

string S;
int N;

bool check(string S)
{
	stack<char>stk;
 	for (auto A : S)
	{
		if (A == '(')
		{
			stk.push(A);
		}
		else
		{
			if (!stk.empty())
			{
				stk.pop();
			}
			else
			{
				return false;
			}
		}
	}
	return stk.empty();
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> S;
		check(S) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;

}