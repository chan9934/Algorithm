#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a[3] = { 1, 2, 3 };

vector<int>v;

void PrintP()
{
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << '\n';
}

void MakePermutation(int n, int r, int Depth)
{
	if (r == Depth)
	{
		PrintP();
		return;
	}

	for (int i = Depth; i < n; ++i)
	{
		swap(v[i], v[Depth]);
		MakePermutation(3, 3, Depth + 1);
		swap(v[i], v[Depth]);
	}
	return;
}

int main()
{
	for (int i = 0; i < 3; ++i)
	{
		v.push_back((a[i]));
	}

	MakePermutation(3, 3, 0);
}