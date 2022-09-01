#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include <vector>

using namespace std;
//int ret = 1;
//void a()
//{
//	ret = 2;
//	cout << ret << "\n";
//	return;
//}
////int main()
////{
////	string a;
////	cin >> a;
////	cout << a << "\n";
////	return 0;
////}
//int main()
//{
//	a();
//	return 0;
//}
//double a()
//{
//	return 1.2333;
//}
//
//int main()
//{
//	double ret = a();
//	cout << ret << "\n";
//	return 0;
//}
//int main()
//{
//	char a = 'a';
//	cout << a << "\n";
//	return 0;
//}
//int main()
//{
//	string a = "wow fantastic";
//	cout << a << "\n";
//	return 0;
//}
//int main()
//{
//	string a = "wow";
//	a += " ";
//	a += "fantastic";
//	cout << a.size() << "\n"; //¹®ÀÚ±æÀÌ µÚÀÇ \0Àº »©³ªº½
//	cout << a << "\n";
//	return 0;
//}
//int main()
//{
//	//ios::sync_with_stdio(false);
//	cin.tie(NULL);
//		string s = "123";
//	s[0]++;
//	cout << s << "\n";
//	return 0;
//
//}
//int main()
//{
//	char a = 'a';
//	cout << (int)a << "\n";
//	return 0;
//}
//typedef long long ll;
//ll INF = 1e18;
//double pi = 3.221;
//int a;
//int main()
//{
//	cin >> a;
//	scanf("%d", &a);
//
//	scanf("%d.%d", &m1, &m2);
//	return 0;
//}
//int main()
//{
//	int a[10][10], n, m;
//
//	cin >> n >> m;
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			cout << a[i][j];
//		}
//		cout << "\n";
//	}
//	
//	return 0;
//}
//char a[10][10];
//int main()
//{
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			scanf(" %c", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 4; ++j)
//		{
//			cout << a[i][j];
//		}
//		cout << "\n";
//	}
//	return 0;
//}
//string s;
//
//int main()
//{
//	getline(cin, s);
//	cout << s << "\n";
//	return 0;
//}
//int main()
//{
//	/*string s;
//	getline(cin, s);
//	cout << s << "n";*/
//
//	//int n = 0;
//
//	//int sum = 0;
//
//	//while (cin >> n)
//	//{
//	//	sum += n;
//	//	cout << sum;
//	//}
//}
//typedef long long ll;
//double a = 1.23456789;
//
//int main()
//{
//	cout << a << "\n";
//	cout.precision(7);
//
//	cout << a << "\n";
//	return 0;
//}
//
//double a = 1.23456789;
//
//int b = 2;
//
//int main()
//{
//	printf("%.6lf\n", a);
//
//	printf("%05d\n", b);
//}
//int a = 1;
//char s = 'a';
//
//string str = "¾îº¥Á®½º";
//
//double b = 1.223123;
//
//int main()
//{
//	printf("¾ÆÀÌ¿¥¾î ¾ÆÀÌ¾ð¸Ç : %d\n", a);
//	printf("¾ÆÀÌ¿¥¾î ¾ÆÀÌ¾ð¸Ç : %c\n", s);
//	printf("¾ÆÀÌ¿¥¾î ¾ÆÀÌ¾ð¸Ç : %s\n", str.c_str());
//	printf("¾ÆÀÌ¿¥¾î ¾ÆÀÌ¾ð¸Ç : %lf\n", b);
//}
//int main()
//{
//	double ret = 2.12345;
//
//	int n = 2;
//
//	int a = (int)round(ret / double(n));
//
//	cout << a << "\n";
//
//	return 0;
//}
//int main()
//{
//	char a = 'a';
//
//	cout << (int)'a' << "\n";
//	
//	return 0;
//}
//string dopa = "amumu is best";
//
//int main()
//{
//	cout << dopa << "\n";
//
//	if (dopa.find("amumu") != string::npos)
//	{
//		string str = "dopa¼Ó¿¡ ¾Æ¹«¹« ÀÖ´Ù\n";
//
//		printf("%s\n", str.c_str());
//
//		cout << dopa.substr(0, 3) << "\n";
//
//		reverse(dopa.begin(), dopa.begin()+5);
//
//		cout << dopa << "\n";
//
//		return 0;
//	}
//
//	
//}
typedef long long ll;
vector<string> split(string input, string delimiter)
{
	vector<string> ret;

	ll pos = 0;

	string token = "";

	while ((pos = input.find(delimiter)) != string::npos)
	{
		token = input.substr(0, pos);

		ret.push_back((token));

		input.erase(0, pos + delimiter.length());
	}
	
	ret.push_back(input);

	return ret;
	
}

vector<string> split_debug(string input, string delimiter)
{
	vector<string> ret;
	ll pos = 0;

	string token = "";

	while ((pos = input.find(delimiter)) != string::npos)
	{
		/*ll pos = input.find(delimiter);*/

		cout << "POS : " << pos << "\n";

		if (pos == string::npos)
		{
			break;
		}

		token = input.substr(0, pos);

		ret.push_back(token);

		input.erase(0, pos + delimiter.length());
	}
	ret.push_back(input);

	return ret;
}

int main()
{
	string s = "Å·¿ÕÂ¯ ±èµ¿Âù Â¯ Â¯ Â¯";

	string d = " ";

	vector<string>a = split(s, d);

	string s2 = "aaaa bbb ccc ddd eee!";

	vector<string> c = split_debug(s2, d);

	for (string b : a)
	{
		cout << b << "\n";
	}

}