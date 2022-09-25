//#include"bits/stdc++.h"
//
//using namespace std;
//
//string A;
//
//
//int main()
//{
//	bool ret = true;
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> A;
//	for (int i = 0; i < (int)((A.size()) / 2); ++i)
//	{
//		if (*(A.begin() + i) != *(A.end() - 1 - i))
//		{
//			ret = false;
//			break;
//		}
//	}
//
//	cout << ret;
//
//}
#include"bits/stdc++.h"

using namespace std;

string A, Temp;



int main()
{
	bool ret = true;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> A;
	Temp = A;
	reverse(Temp.begin(), Temp.end());
	if (A != Temp)
	{
		ret = false;
	}

	cout << ret;

}