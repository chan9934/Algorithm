#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>>A;

map<int, int>mp;//mp.first ���� mp.second ����
map<int, int>mp2;//mp.first ���� mp.second ���� ��

int N, C, B;

//vector<pair<int, int> A
//A[����] = ����, ����
//B = A;
//B second���� �������� �����ϴµ� ������ ������ ������ ������ �켱
//C.push_back 40��

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