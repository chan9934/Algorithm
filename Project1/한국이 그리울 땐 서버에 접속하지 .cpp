//#include "bits/stdc++.h"
//
//using namespace std;
//
//int N;
//string S;
//string Ret[104];
//string Temp[104];
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> N;
//	cin >> S;
//
//
//	int  Pos = S.find('*');
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Temp[i];
//	}
//	
//	for (int i = 0; i < Pos; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//
//			if (Ret[j] != "NE")
//			{
//				if (S[i] == Temp[j][i])
//				{
//					Ret[j] = "DA";
//				}
//				else
//				{
//					Ret[j] = "NE";
//				}
//			}
//
//		}
//	}
//	for (int i = 0; i < N; ++i)
//	{
//		Temp[i].erase(0, Pos - 1);
//		if (S.size() - Pos - 1 > Temp[i].size())
//		{
//			Ret[i] = "NE";
//		}
//	}
//
//	int k = 1;
//	for (int i = Pos + 1; i < S.size(); ++i)
//	{
//		
//		for (int j = 0; j < N; ++j)
//		{
//			if (Ret[j] != "NE")
//			{
//				
//				if (*(S.end() - k) != (*((Temp[j]).end() - k)))
//				{
//					Ret[j] = "NE";
//				}
//			}
//		}
//		++k;
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Ret[i] << "\n";
//	}
//}
#include<bits/stdc++.h>
using namespace std;

int Pos, N;
string S, Temp;

int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> S;

	Pos = S.find('*');

	string Pre = S.substr(0, Pos);
	string Post = S.substr(Pos + 1);

	for (int i = 0; i < N; ++i)
	{
		cin >> Temp;
		if (Pre.size() + Post.size() > Temp.size())
		{
			cout << "NE" << "\n";
		}

		else if (Pre == Temp.substr(0, Pos) && Post == Temp.substr(Temp.size() - Post.size()))
		{
			cout << "DA" << "\n";
		}

		else
		{
			cout << "NE" << "\n";
		}

	}
	return 0;

}