//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int a[5] = { 1, 2, 3, 4, 5 };
//vector<int> v;
//int n = 5;
//int r = 3;
//void printf(vector<int>&v)
//{
//	for (int i : v)
//	{
//		cout << i << " ";
//	}
//	cout << "\n";
//}
//
//void Combine(int start, vector<int>v)
//{
//	if (r == v.size())
//	{
//		printf(v);
//		return;
//	}
//
//	for (int i = start + 1; i < n; ++i)
//	{
//		v.push_back(i);
//
//		Combine(i, v);
//
//		v.pop_back();
//
//	}
//	return;
//}
//
//
//int main()
//{
//	
//	Combine(-1, v);
//	return 0;
//
//}
#include <iostream>
#include <vector>

using namespace std;

int n = 5, r = 3, a[5] = { 1,2,3,4,5 };
void print(vector<int>&v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << "\n";
	return;
}

void Combine(int start, vector<int>& v)
{
	if (v.size() == r)
	{
		print(v);
		return;
	}

	for (int i = start + 1; i < n; ++i)
	{
		v.push_back(i);

		Combine(i, v);

		v.pop_back();
	}
	return;
}

int main()
{
	vector<int>v;

	Combine(-1, v);
	
	return 0;
}