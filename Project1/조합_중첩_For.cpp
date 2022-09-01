//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int>v;
//
//	for (int i = 0; i < 5; ++i)
//	{
//		for (int j = i + 1; j < 5; ++j)
//		{
//			for (int k = j + 1; k < 5; ++k)
//			{
//				v.push_back(i);
//				v.push_back(j);
//				v.push_back(k);
//				for (int a : v)
//				{
//					cout << a << " ";
//				}
//				cout << "\n";
//				v.clear();
//			}
//		}
//	}
//}
#include <iostream>

using namespace std;

int main()
{


	for (int i = 0; i < 5; ++i)
	{
		for (int j = i + 1; j < 5; ++j)
		{
			for (int k = j + 1; k < 5; ++k)
			{
				cout << i << " " << j << " " << k << "\n";
			}
		}
	}
	return 0;
}