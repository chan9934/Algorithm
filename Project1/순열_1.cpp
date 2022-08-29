#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void PrintV(vector<int>&V)
{
	for (int i = 0; i < V.size(); ++i)
	{
		cout << V[i] << " ";
	}
	cout << "\n";
}

int main()
{
	int a[3] = { 1, 2, 3 };

	vector<int> VPermu;

	for (int i = 0; i < 3; ++i)
	{
		VPermu.push_back((a[i]));
	}

	do
	{
		PrintV(VPermu);
	} while (next_permutation(VPermu.begin(), VPermu.end()));

	cout << "---------------------------" << endl;

	VPermu.clear();

	for (int i = 2; i >= 0; --i)
	{
		VPermu.push_back((a[i]));
	}

	do
	{
		PrintV(VPermu);
	} while (prev_permutation(VPermu.begin(), VPermu.end()));

	return 0;
}