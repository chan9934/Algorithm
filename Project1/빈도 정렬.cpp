#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>>A;

map<int, int>mp;//mp.first 숫자 mp.second 갯수
map<int, int>mp2;//mp.first 숫자 mp.second 나온 수

int N, C, B;

//vector<pair<int, int> A
//A[숫자] = 순서, 갯수
//B = A;
//B second기준 내림차순 정렬하는데 갯수가 같을시 순서가 빠른게 우선
//C.push_back 40분

bool cmp(pair<int, int> A, pair<int, int> B)
{
	if (A.second == B.second)
	{
		return mp2[A.first] < mp2[B.first];
	}

	return A.second > B.second;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> C;

	for (int i = 0; i < N; ++i)
	{
		cin >> B;
		++mp[B];
		if (mp2[B] == 0)
		{
			mp2[B] = i + 1;
		}
	}

	for (auto it : mp)
	{
		A.push_back(make_pair(it.first, it.second));
	}

	sort(A.begin(), A.end(), cmp);

	for (auto it : A)
	{
		for (int i = 0; i < it.second; ++i)
		{
			cout << it.first << " ";
		}
	}

	return 0;


}