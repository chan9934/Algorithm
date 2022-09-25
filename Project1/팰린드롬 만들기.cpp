////#include<bits/stdc++.h>
////
////using namespace std;
////
////string S;
////string Temp2;
////
////string Temp3;
////
////int main()
////{
////	ios_base::sync_with_stdio;
////	cin.tie(NULL);
////	cout.tie(NULL);
////
////	cin >> S;
////	
////
////	sort(S.begin(), S.end());
////
////	if (S[0] != S[1])
////	{
////		cout << "I'm Sorry Hansoo";
////
////		return 0;
////	}
////	Temp3 = S;
////	S.erase(S.begin(), S.begin() + 2);
////
////	
////	do
////	{
////		
////		string Temp = S;
////
////		reverse(S.begin(), S.end());
////		
////		if (Temp == S)
////		{
////			cout << Temp3[0] + S + Temp3[1];
////			return 0;
////		}
////
////		S = Temp;
////
////	} while (next_permutation(S.begin(), S.end()));
////
////	cout << "I'm Sorry Hansoo";
////
////	return 0;
////
////
////}
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int holl;
//
//bool Fault;
//
//int C[26];
//
//string Name;
//string Ret;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> Name;
//
//	for (char i : Name)
//	{
//		++C[i - 'A'];
//
//		if (C[i - 'A'] % 2 == 1)
//		{
//			++holl;
//		}
//		else
//		{
//			--holl;
//		}
//	}
//	if (holl >= 2)
//	{
//		cout << "I'm Sorry Hansoo";
//		return 0;
//	}
//
//	for (int i = 25; i >= 0; --i)
//	{
//		if (C[i] == 1)
//		{
//			Ret.insert((Ret.size() / 2), 1, i + 'A');
//		}
//		else if (C[i] % 2 == 0)
//		{
//			Ret.insert(0, C[i] / 2, i + 'A');
//			Ret.insert(Ret.size(), C[i] / 2, i + 'A');
//		}
//		else if (C[i] % 2 == 1)
//		{
//
//			Ret.insert((Ret.size() / 2), 1, i + 'A');
//			Ret.insert(0, (C[i] - 1) / 2, i + 'A');
//			Ret.insert(Ret.size(), (C[i] - 1) / 2, i + 'A');
//
//		}
//
//
//	}
//	cout << Ret;
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;


char Mid;
string S;
int C[200];

int Frag;

string Ret;
int main()
{
	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	cin >> S;

	for (char a : S)
	{
		++C[a];
	}

	for (int i = 'Z'; i >= 'A'; --i)
	{
		if (C[i] & 1)
		{
			Mid = i;
			++Frag;
			--C[i];

		}
		if (Frag == 2)
		{
			break;
		}
		for (int j = 0; j < C[i]; j+=2)
		{
			Ret = (char)i + Ret;
			Ret = Ret + (char)i;
		}


	}
	if (Mid)
	{
		Ret.insert(Ret.begin() + Ret.size()/2, mid);
	}
	if(Frag == 2)

}