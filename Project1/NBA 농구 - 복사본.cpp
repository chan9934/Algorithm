//#include<bits/stdc++.h>
//#pragma warning (disable:4996)
//using namespace std;
//
//int Goal, Team, Hour, Seconds, win;
//int Team1Hour, Team1Seconds, Team2Hour, Team2Seconds;
//
//string Time;
//
//vector<pair<int, string>>V;
//map<int, pair<int, int>>mp;
//
//int Score[2];
//
//int main()
//{
//	cin >> Goal;
//	for (int i = 0; i < Goal; ++i)
//	{
//		cin >> Team;
//		cin >> Time;
//
//		Hour = stoi(Time.substr(0, Time.find(':')));
//		Seconds = stoi(Time.substr(Time.find(':') + 1));
//
//		
//		if (Team == 1)
//		{
//			if (Score[0] == Score[1])
//			{
//				mp[1] = make_pair(Hour, Seconds);
//			}
//			++Score[0];
//			if (Score[0] == Score[1])
//			{
//				Team2Hour += Hour - mp[2].first;
//				Team2Seconds += Seconds - mp[2].second;
//				if (Team2Seconds >= 60)
//				{
//					++Team2Hour;
//					Team2Seconds -= 60;
//				}
//				else if (Team2Seconds < 0)
//				{
//					Team2Seconds = 60 + Team2Seconds;
//					--Team2Hour;
//				}
//			}
//		}
//		if (Team == 2)
//		{
//			if (Score[0] == Score[1])
//			{
//				mp[2] = make_pair(Hour, Seconds);
//			}
//			++Score[1];
//			if (Score[0] == Score[1])
//			{
//				Team1Hour += Hour - mp[1].first;
//				Team1Seconds += Seconds - mp[1].second;
//				if (Team1Seconds >= 60)
//				{
//					++Team1Hour;
//					Team1Seconds -= 60;
//				}
//				else if (Team1Seconds < 0)
//				{
//					Team1Seconds = 60 + Team1Seconds;
//					--Team1Hour;
//				}
//			}
//		}
//	}
//	if (Score[0] != Score[1])
//	{
//		if (Score[0] > Score[1])
//		{
//			Team1Hour += 47 - mp[1].first;
//			Team1Seconds += 60 - mp[1].second;
//			if (Team1Seconds >= 60)
//			{
//				++Team1Hour;
//				Team1Seconds -= 60;
//			}
//		}
//		if (Score[0] < Score[1])
//		{
//			Team2Hour += 47 - mp[2].first;
//			Team2Seconds += 60 - mp[2].second;
//			if (Team2Seconds >= 60)
//			{
//				++Team2Hour;
//				Team2Seconds -= 60;
//			}
//		}
//	}
//		printf("%02d:%02d\n", Team1Hour, Team1Seconds);
//		printf("%02d:%02d\n", Team2Hour, Team2Seconds);
//
//
//		return 0;
//}
#include<bits/stdc++.h>

using namespace std;

#define prev dongchan

int n, o, A, B, asum, bsum;
string s, prev;

void go(int& sum, string s)
{
	sum += changetoint(prev) - changetoint(s);
}

int changetoint(string SSS)
{
	return stoi(SSS.substr(0, 2)) * 60 + stoi(SSS.substr(3, 2));
}
string print(int aaa)
{

}

int main()
{
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> o;
		cin >> s;
		if (A > B)
		{
			go(asum, s);
		}
		else if (B > A)
		{	
			go(bsum, s);
		}
		(o == 1) ? ++A : ++B;

		prev = s;
	}
	if (A > B)
	{
		go(asum, "48:00");
	}
	else if (B > A)
	{
		go(bsum, "48:00");
	}

	cout << print(asum) << "\n";
	cout << print(bsum) << "\n";

}