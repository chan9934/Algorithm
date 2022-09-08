#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
#include <cstring>
#include <map>
#include <unordered_map>
#include <set>
#include <stack>
#include<queue>

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
//	cout << a.size() << "\n"; //문자길이 뒤의 \0은 빼나봄
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
//string str = "어벤져스";
//
//double b = 1.223123;
//
//int main()
//{
//	printf("아이엠어 아이언맨 : %d\n", a);
//	printf("아이엠어 아이언맨 : %c\n", s);
//	printf("아이엠어 아이언맨 : %s\n", str.c_str());
//	printf("아이엠어 아이언맨 : %lf\n", b);
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
//		string str = "dopa속에 아무무 있다\n";
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
//typedef long long ll;
//vector<string> split(string input, string delimiter)
//{
//	vector<string> ret;
//
//	ll pos = 0;
//
//	string token = "";
//
//	while ((pos = input.find(delimiter)) != string::npos)
//	{
//		token = input.substr(0, pos);
//
//		ret.push_back((token));
//
//		input.erase(0, pos + delimiter.length());
//	}
//	
//	ret.push_back(input);
//
//	return ret;
//	
//}
//
//vector<string> split_debug(string input, string delimiter)
//{
//	vector<string> ret;
//	ll pos = 0;
//
//	string token = "";
//
//	while ((pos = input.find(delimiter)) != string::npos)
//	{
//		/*ll pos = input.find(delimiter);*/
//
//		cout << "POS : " << pos << "\n";
//
//		if (pos == string::npos)
//		{
//			break;
//		}
//
//		token = input.substr(0, pos);
//
//		ret.push_back(token);
//
//		input.erase(0, pos + delimiter.length());
//	}
//	ret.push_back(input);
//
//	return ret;
//}
//
//int main()
//{
//	string s = "킹왕짱 김동찬 짱 짱 짱";
//
//	string d = " ";
//
//	vector<string>a = split(s, d);
//
//	string s2 = "aaaa bbb ccc ddd eee!";
//
//	vector<string> c = split_debug(s2, d);
//
//	for (string b : a)
//	{
//		cout << b << "\n";
//	}
//
//}
//vector<string>split(string input, string delimiter)
//{
//	vector<string>ret;
//	long long pos = 0;
//	string token = "";
//
//	while ((pos = input.find(delimiter)) != string::npos)
//	{
//		token = input.substr(0, pos);
//
//		ret.push_back(token);
//
//		input.erase(0, delimiter.length());
//
//	}
//
//	ret.push_back(input);
//	return ret;
//
//}
//
//vector<string> Split_Debug(string input, string delimiter)
//{
//	vector<string>ret;
//	long long pos;
//	string token = "";
//
//	while ((pos = input.find(delimiter)) != string::npos)
//	{
//		cout << "pos = " << pos << "\n";
//
//		token = input.substr(0, pos);
//
//		ret.push_back((token));
//
//		input.erase(0, pos + delimiter.length());
//	}
//
//	ret.push_back((input));
//
//	return ret;
//}
//
//
//int main()
//{
//	string Str = "열심히 하겠습니다 감사합니다 알고리즘 공부 열심히 하고 있습니다";
//	string Standard = " ";
//
//	vector<string> Result = Split_Debug(Str, Standard);
//
//	for (string a : Result)
//	{
//		cout << a << "\n";
//	}
//
//}
//int main()
//{
//	string s = "1";
//
//	string s2 = "amumu";
//
//	cout << atoi(s.c_str()) << endl;
//
//	cout << atoi(s2.c_str()) << endl;
//}
//int main()
//{
//	int a = -1;
//
//	cout << bool(a) << "\n";
//
//	a = 0;
//
//	cout << bool(a) << "\n";
//	a = 3;
//
//	cout << bool(a) << "\n";
//
//
//}
// 데이터를 효율적으로 접근하고 수정 가능 할 수 있게 만들어 놓은 자료의 조직
// 데이터 간의 관계, 그리고 데이터에 적용할 수 있는 함수나 명령을 의미
// 자료의 처리를 좀더 효율적으로 하기위한 조직
// 
//
//
//pair<int, int> pi;
//tuple<int, int, int> tl;
//
//int a, b, c;
//
//int main()
//{
//	pi = make_pair(1, 2);
//	tl = make_tuple(1, 2, 3);
//
//	tie(a, b) = pi;
//	cout << a << ":" << b << "\n";
//
//	tie(a, b, c) = tl;
//	cout << a << ":" << b << ":" << c << "\n";
//
//	return 0;
//}
//pair<int, int> pi;
//
//tuple<int, int, int> tl;
//
//int a = 0, b = 0, c = 0;
//
//int main()
//{
//	pi = make_pair(1, 2);
//
//	a = pi.first;
//
//	b = pi.second;
//
//	cout << a << ":" << b << "\n";
//
//	tl = make_tuple(1, 2, 3);
//
//	a = get<0>(tl);
//
//	b = get<1>(tl);
//
//	c = get<2>(tl);
//
//	cout << a << ":" << b << ":" << c <<"\n";
//
//}
//배열 등 컨테이너들으 ㅣ요소를 정렬하는 함수
//array나 vector를 정렬할때 쓰인다
// 컨테이너 같은타입으 ㅣ여러객체를 저장하는 집합
// 같은 타입의 여러 객체를 저장하는 집합
// [first, last)라는 범위
//
//
//vector<int> a;
//
//int b[5];
//
//int main()
//{
//
//	for (int i = 0; i < 5; ++i)
//	{
//		a.push_back((i + 1));
//	}
//
//	for (int i = 5; i >= 1; --i)
//	{
//		b[i - 1] = i;
//	}
//
//	sort(b, b + 5);
//
//	sort(a.begin(), a.end(), less<int>());
//
//	for (int i : b)
//	{
//		cout << i << " ";
//	}
//	cout << "\n";
//
//	for (int j : a)
//	{
//		cout << j << " ";
//	}
//	cout << "\n";
//
//	sort(b, b + 5, greater<int>());
//
//	sort(a.begin(), a.end(), greater<int>());
//
//	for (int i : b)
//	{
//		cout << i << " ";
//	}
//	cout << "\n";
//
//	for (int j : a)
//	{
//		cout << j << " ";
//	}
//	cout << "\n";
//
//
//
//}
//vector<pair<int, int>> v;
//
//int main()
//{
//	for (int i = 10; i >= 1; --i)
//	{
//
//		v.push_back({11 - i, i});
//	}
//
//	sort(v.begin(), v.end());
//
//	for (pair<int, int> it : v)
//	{
//		cout << it.first << ":" << it.second << "\n";
//	}
//}
//vector<pair<int, int>> v;
//
//bool cmp(pair<int, int>a, pair<int, int>b)
//{
//
//	return a.first > b.first;
//
//}
//
//int main()
//{
//	for (int i = 10; i >= 1; --i)
//	{
//		v.push_back({ i, 11 - i });
//	}
//
//	sort(v.begin(), v.end(), cmp);
//
//	for (pair<int, int> a : v)
//	{
//		cout << a.first << ":" << a.second << "\n";
//	}
//
//}
//
//// 동적으로 요소를 할당 할 수 있는 동적 배열
//// 컴파일 시점에 개수를 모른다면 벡터를 써야한다.
//// 중복 허용 및 순서, 랜덤 접근 가능
//// 탐색과 맨앞이나 뒤의 요소에 삽입 또는 삭제 시간복잡도는 1
//// 그외의 요소 삭제 삽입은 n이다
//// 
////
//
//vector<int> v;
//
//int main()
//{
//	for (int i = 0; i < 10; ++i)
//	{
//		v.emplace_back((i));
//	}
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//	v.pop_back();
//
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//
//	v.erase(v.begin(), v.begin() + 1);
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//	vector<int>::iterator a = find(v.begin(), v.end(), 100);
//	if (a == v.end())
//	{
//		cout << "not found" << "\n";
//	}
//
//	fill(v.begin(), v.end(), 10);
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//
//	v.clear();
//	cout << "아무도 없을까\n" << endl;
//		for (int a : v)
//		{
//			cout << a << " ";
//		}
//	cout << "\n";
//
//}
//
//vector<int>v(5, 100);
//
//int main()
//{
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//	return 0;
//}
//
//// vector를 함수 매개변수로 만들어 변화시키기
//// vector는 동적할당이기에 크기를 몰라 call by reference로 받아야한다.
//
//void f(vector<int>& v)
//{
//	v[0] = 100;
//}
//
//int main()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 3; ++i)
//	{
//		v.push_back(i);
//	}
//	f(v);
//
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//}
//void f(vector<int>v[10])
//{
//	v[0][0] = 1000;
//}
//
//int main()
//{
//	vector<int> v[10];
//	v[0].push_back(100);
//	f(v);
//	for (int i : v[0])
//	{
//		cout << i << " ";
//	}
//}
//
//void f(vector<vector<int>>& v)
//{
//	vector<int> vv;
//	vv.push_back(10000);
//	v.push_back((vv));
//}
//
//int main()
//{
//	vector<vector<int>>v;
//	f(v);
//	for (int i : v[0])
//		cout << i << "\n";
//
//	return 0;
//
//}
//Array CStyle int a[10]
//std array<int, 10> a;
//
//int v[10];
//
//int main()
//{
//	for (int i = 1; i <= 10; ++i)
//	{
//		v[i - 1] = i;
//	}
//
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//
//	auto a = find(v, v + 10, 100);
//	if (a == v + 10)
//	{
//		cout << "찾을 수 없다 \n";
//	}
//	fill(v, v + 10, 10);
//
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//	cout << "\n";
//	return 0;
//
//
//}
////memset은 바이트 단위로 초기화 하여 0, -1 하나의 문자로 초기화 할때 보통 fill 대신 사용된다
//벡터초기화하기
//
////vector<int> v[10];
////int n = 10;
//////vector<int> v(n, 0);
//////vector<vector<int>>checked;
////vector<vector<int>>v(n + 1, vector<int>(n + 1, 10));
//
////int main()
////{
////	for (vector<int> a : v)
////	{
////		for (int b : a)
////		{
////			cout << b << " ";
////		}
////		cout << "\n";
////	}
////}
//
////fill(v.begin(), v.end(), 0);
//
////int dp[10] = { 0, };
////
////int dp2[10][10] = { {0, }, };
////
////int n = 10;
////
////
////int a[n] = { 0, 1 };
////
////vector<vector<int>> checked;
//
//for(int i = 0; i < 10; ++i)
//int dp[10][10] = { {0, }, };
//
//for (int i = 0; i < 10; ++i)
//{
//	fill(dp[i], dp[i] + 10, 0);
//}
//
//fill(&arr[0][0], &arr[0][0] + n * m k)
//memcpy
//int a[5];
//int temp[5];
//
//int main()
//{
//	for (int i = 0; i < 5; ++i)
//	{
//		a[i] = i;
//	}
//
//	memcpy(temp, a, sizeof(a));
//
//	for (int i : temp)
//		cout << i << " ";
//	return 0;
//}
//const int mxy = 3;
//const int mxx = 4;
//
//int a[mxy][mxx];
//
//int main()
//{
//	for (int i = 0; i < mxy; ++i)
//	{
//		for (int j = 0; j < mxx; ++j)
//		{
//			a[i][j] = (i + j);
//		}
//	}
//
//	//good
//	for (int i = 0; i < mxy; ++i)
//	{
//		for (int j = 0; j < mxx; ++j)
//		{
//			cout << a[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//
//	//bad
//	for (int i = 0; i < mxx; ++i)
//	{
//		for (int j = 0; j < mxy; ++j)
//		{
//			cout << a[j][i] << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;
//}
//int v[10];
//
//int main()
//{
//	unordered_map<string, int> umap;
//
//	umap.insert({ "test1", 1 });
//	
//	umap.emplace("test5", 5);
//	
//	umap["test1"] = 4;
//
//	for (auto element : umap)
//	{
//		cout << element.first << "::" << element.second << "n";
//	}
//
//	auto search = umap.find("test4");
//
//	if (search != umap.end())
//	{
//		cout << "found :" << search->first << " " << (*search).second << "\n";
//	}
//	else
//	{
//		cout << "not found.." << "\n";
//	}
//
//	umap["test1"]++;
//
//	cout << umap["test1"] << "\n";
//
//	cout << umap.size() << "\n";
//
//	umap.erase("test1");
//
//	cout << umap.size() << "\n";
//
//	return 0;
//
//}
//
//using namespace std;
//
//int main()
//{
//	map<string, int> _map;
//
//	_map["큰돌"]++;
//	_map["큰돌"]++;
//
//	for (auto c : _map)
//	{
//		cout << c.first << " : " << c.second << "\n";
//	}
//	return 0;
//
//}
//map<int, int> mp;
//map<string, string> mp2;
//
//int main()
//{
//	cout << mp[1] << "\n";
//	cout << mp2["aaa"] << "\n";
//
//	for (auto i : mp)
//	{
//		cout << i.first << " " << i.second;
//	}
//
//	cout << "\n";
//	for (auto i : mp2)
//	{
//		cout << i.first << " " << i.second;
//	}
//
//	return 0;
//}
//map<int, int> mp;
//map<string, string> mp2;
//
//int main()
//{
//	if (mp[1] == 0)
//	{
//		mp[1] = 2;
//	}
//
//	for (auto i : mp)
//	{
//		cout << i.first << " " << i.second;
//	}
//
//	return 0;
//}
// 정렬이 됨 레드 블랙트리 기반 탐색 삽입 삭제에 log N 걸림
//
//int main()
//{
//	set<pair<string, int >> st;
//	st.insert({ "test", 1 });
//	st.insert({ "test", 1 });
//	st.insert({ "test", 1 });
//	st.insert({ "test", 1 });
//
//	cout << st.size() << "\n";
//
//	set<int> st2;
//	st2.insert(1);
//	st2.insert(2);
//	st2.insert(2);
//	for (auto it : st2)
//	{
//		cout << it << "\n";
//	}
//}
//int main()
//{
//	set<pair<string, int>> _set;
//	_set.insert({ "test", 1 });
//	_set.insert({ "test", 1 });
//	_set.insert({ "test", 1 });
//	_set.insert({ "test", 1 });
//	cout << _set.size() << "\n";
//	return 0;
//}
//multiset<int> s;
//
//int main()
//{
//	s.insert(12);
//	s.insert(10);
//	s.insert(2);
//	s.insert(10);
//	s.insert(90);
//	s.insert(85);
//	s.insert(45);
//
//	cout << "Multiset elements after sort\n";
//
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << ' ';
//	}
//	cout << "\n";
//
//	auto it1 = s.find(10);
//	auto it2 = s.find(90);
//
//	s.erase(it1, it2);
//
//	cout << "Multiset Elements After erase:\n";
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << ' ';
//	}
//
//	s.erase(s.begin());
//
//	cout << "\n";
//
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << (*it) << ' ';
//	}
//	return 0;
//
//}
//
//stack<string>stk;
//
//int main()
//{
//	stk.push("엄");
//	stk.push("준");
//	stk.push("식");
//	stk.push("화");
//	stk.push("이");
//	stk.push("팅");
//
//	while (stk.size())
//	{
//		cout << stk.top() << "\n";
//		stk.pop();
//	}
//}
//int main()
//{
//	queue<int> q;
//	q.push(1);
//	cout << q.front() << "\n";
//
//	q.pop();
//
//	cout << q.size() << "\n";
//
//	return 0;
//}
//int main()
//{
//	queue<int> q;
//
//	for (int i = 1; i <= 10; ++i)
//	{
//		q.push(i);
//	}
//
//	while (q.size())
//	{
//		cout << q.front() << ' ';
//		q.pop();
//	}
//	return 0;
//}
//int main()
//{
//	deque<int> dq;
//	dq.push_front(1);
//	dq.push_back(2);
//	dq.push_back(3);
//
//	cout << dq.front() << "\n";
//	cout << dq.back() << "\n";
//	cout << dq.size() << "\n";
//
//	dq.pop_back();
//	dq.pop_front();
//
//	cout << dq.size() << "\n";
//
//	return 0;
//}
//struct Point
//{
//	int x, y;
//	Point(int y, int x) : y(y), x(x)
//	{
//	}
//	Point()
//	{
//		y = -1;
//		x = -1;
//	}
//
//	bool operator < (const Point& a) const
//	{
//		if (x == a.x)
//		{
//			return y < a.y;
//		}
//		
//		return x < a.x;
//
//
//	}
//};
//struct Point
//{
//	int y, x;
//
//	Point(int y, int x)
//		: y(y)
//		, x(x)
//	{
//	}
//
//	Point()
//	{
//		y = -1;
//		x = -1;
//	}
//
//	bool operator < (const Point& a) const
//	{
//		if (x == a.x)
//		{
//			return y < a.y;
//		}
//
//		return x < a.x;
//	}
//};
//
//struct percent
//{
//	int x, y;
//	double w, d, l;
//} a[6];
//
//struct Point
//{
//	int y, x;
//
//	Point(int y, int x)
//		: y(y)
//		, x(x)
//	{
//	}
//
//	Point()
//	{
//		y = -1;
//		x = -1;
//	}
//
//	bool operator < (const Point& a)const
//	{
//		if (x == a.x)
//		{
//			return y < a.y;
//		}
//
//		else
//		{
//			return x < a.x;
//		}
//	}
//};
//
//vector<Point>v;
//int main()
//{
//	for (int i = 10; i >= 1; --i)
//	{
//		Point a = { i, i };
//		v.push_back(a);
//	}
//
//	sort(v.begin(), v.end());
//	for (auto it : v)
//	{
//		cout << it.y <<  " : " << it.x << "\n";
//		
//	}
//	return 0;
//}
//struct Point
//{
//	int x, y, z;
//
//	Point(int y, int x, int z)
//		: y(y)
//		, x(x)
//		, z(z)
//	{
//	}
//
//	Point()
//	{
//		y = -1;
//		x = -1;
//		z = -1;
//	}
//
//	bool operator < (const Point& a)const
//	{
//		if (x == a.x)
//		{
//			if (y == a.y)
//			{
//				return z < a.z;
//			}
//			return y > a.y;
//		}
//		return x < a.x;
//	}
//};
//struct Point
//{
//	int y, x;
//};
//
//bool cmp(const Point& a, const Point& b)
//{
//	return a.x > b.x;
//}
//
//vector<Point>v;
//
//int main()
//{
//	for (int i = 10; i >= 1; --i)
//	{
//		v.push_back({ i, 10 - i });
//	}
//
//sort(v.begin(), v.end(), cmp);
//
//for (auto it : v)
//{
//	cout << it.y << ":" << it.x << "\n";
//}
//return 0;
//
//}
//priority_queue<int, vector<int>, greater<int>>pq;
//priority_queue<int, vector<int>, less<int>>pq2;
//
//int main()
//{
//	pq.push(5);
//	pq.push(4);
//	pq.push(3);
//	pq.push(2);
//	pq.push(1);
//
//	cout << pq.top() << "\n";
//
//	return 0;
//}
//struct Point
//{
//	int y, x;
//	Point(int y, int x)
//		: y(y)
//		, x(x)
//	{
//	}
//
//	Point()
//	{
//		y = -1;
//		x = -1;
//	}
//	bool operator < (const Point& a) const
//	{
//		return x < a.x;
//	}
//};
//
//priority_queue<Point> pq;
//
//int main()
//{
//	pq.push({ 1, 1 });
//	pq.push({ 2, 2 });
//	pq.push({ 3, 3 });
//	pq.push({ 4, 4 });
//	pq.push({ 5, 5 });
//	pq.push({ 6, 6 });
//
//	cout << pq.top().x << "\n";
//
//	return 0;
//}
//struct Point
//{
//	int y, x;
//};
//
//struct cmp
//{
//	bool operator ()(Point a, Point b)
//	{
//		return a.x < b.x;
//	}
//};
//
////bool cmp(Point a, Point b)
////{
////	return a.x < b
////}
//
//priority_queue<Point, vector<Point>, cmp> pq;
//
//int main()
//{
//	pq.push({ 1, 1 });
//	pq.push({ 2, 2 });
//	pq.push({ 3, 3 });
//	pq.push({ 4, 4 });
//	pq.push({ 5, 5 });
//	pq.push({ 6, 6 });
//
//	cout << pq.top().x << "\n";
//
//	return 0;
//}
//
//int main()
//{
//	string a = "abcda";
//	string* b = &a;
//
//	cout << b << "\n";
//	cout << *b << "\n";
//
//	return 0;
//}
//
//int v[10];
//int main()
//{
//	unordered_map<string, int> umap;
//
//	umap.insert({ "test1", 1 });
//
//	umap.emplace("test5", 5 );
//
//	umap["test1"] = 4;
//
//	for (auto it : umap)
//	{
//		cout << it.first << "::" << it.second << "\n";
//	}
//
//	auto search = umap.find("test4");
//
//	if (search != umap.end())
//	{
//		cout << "found : " << search->first << " " << (*search).second << "\n";
//	}
//
//	else
//	{
//		cout << "not found.." << "\n";
//	}
//
//	umap["test1"]++;
//
//	cout << umap["test1"] << "\n";
//
//	cout << umap.size() << "\n";
//
//	umap.erase("test1");
//
//	cout << umap.size() << "\n";
//
//	return 0;
//
//	
//
//}
//vector<int> v;
//
//int main()
//{
//	for (int i = 1; i <= 5; ++i)
//	{
//		v.push_back(i);
//	}
//
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << i << "번째 요소 : " << *(v.begin() + i) << "\n";
//		cout <<&*(v.begin() + i) << "\n";
//
//	}
//}
//int idx = 2;
//
//void go(int& idx)
//{
//	idx = 1;
//}
//
//void go2(int idx)
//{
//	idx = 100;
//}
//
//int main()
//{
//	go(idx);
//	cout << idx << "\n";
//	go2(idx);
//	cout << idx << "\n";
//}
//void go(int a[])
//{
//	a[2] = 100;
//}
//
//int main()
//{
//	int a[3] = { 1, 2, 3 };
//
//	go(a);
//	for (int i : a)
//	{
//		cout << i << "\n";
//	}
//}
//void printV(vector<int>& v)
//{
//	for (int i : v)
//	{
//		cout << i << " ";
//	}
//	
//	cout << "\n";
//}
//
//int main()
//{
//	int a[3] = { 1, 2, 3 };
//
//	vector<int> v;
//	for (int i = 0; i < 3; ++i)
//	{
//		v.push_back(a[i]);
//	}
//
//	do 
//	{
//		printV(v);
//	} while (next_permutation(v.begin(), v.end()));
//
//	cout << "----------------------" << "\n";
//
//	v.clear();
//	for (int i = 2; i >= 0; --i)
//	{
//		v.push_back((a[i]));
//	}
//
//	do 
//	{
//		printV(v);
//	} while (prev_permutation(v.begin(), v.end()));
//}
//int a[3] = { 1, 2, 3 };
//
//vector<int> v;
//
//void printV(vector<int> v)
//{
//	for (int i = 0; i < v.size(); ++i)
//	{
//		cout << v[i] << " ";
//	}
//
//	cout << "\n";
//}
//
//void makePermutation(int n, int r, int depth)
//{
//	if (r == depth)
//	{
//		printV(v);
//		return;
//	}
//
//	for (int i = depth; i < n; ++i)
//	{
//		swap(v[i], v[depth]);
//		makePermutation(n, r, depth + i);
//		swap(v[i], v[depth]);
//	}
//
//	return;
//}
//
//int main()
//{
//	for (int i = 0; i < 3; ++i)
//	{
//		v.push_back(a[i]);
//		makePermutation(3, 3, 0);
//		return 0;
//	}
//}
//int n = 5, k = 3, a[5] = { 1, 2, 3, 4, 5 };
//
//void print(vector<int> b)
//{
//	for (int i : b)
//	{
//		cout << i << " ";
//	}
//		cout << "\n";
//	
//}
//
//void combi(int start, vector<int> b)
//{
//	if (b.size() == k)
//	{
//		print(b);
//		return;
//	}
//
//	for (int i = start; i < n; ++i)
//	{
//		b.push_back(i);
//		combi(i, b);
//		b.pop_back();
//	}
//	return;
//}
//int main()
//{
//	vector<int> b;
//	combi(0, b);
//	return 0;
//}
//int n = 5;
//int r = 3;
//int a[5] = { 1, 2, 3, 4, 5 };
//void printV(vector<int> v)
//{
//	for (int i : v)
//	{
//		cout << i << " ";
//	}
//	cout << "\n";
//}
//
//void combi(int Start, vector<int> v)
//{
//	if (v.size() == r)
//	{
//		printV(v);
//		return;
//	}
//
//	for (int i = Start + 1; i < n; ++i)
//	{
//		v.push_back(i);
//		combi(i, v);
//		v.pop_back();
//	}
//}
//
//int main()
//{
//	vector<int> v;
//	combi(-1, v);
//	return 0;
//}
//int n = 5;
//int k = 3;
//int a[5] = { 1, 2, 3, 4, 5 };
//int main()
//{
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = i + 1; j < n; ++j)
//		{
//			for (int k = j + 1; k < n; ++k)
//			{
//
//			}
//		}
//	}
//}
//int n = 5;
//int k = 2;
//int a[5] = { 1, 2, 3, 4, 5 };
//int main()
//{
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = i + 1; j < n; ++j)
//		{
//			cout << i << " " << j << "\n";
//		}
//	}
//}
//int gcd(int a, int b)
//{
//	if (0 == a)
//	{
//		return b;
//	}
//
//	return gcd(b % a, a);
//}
//
int gcd(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	return gcd(b % a, a);
}

int lcm(int a, int b)
{
	return (a * b )/ gcd(a, b);
}

int main()
{
	int a = 10, b = 12;
	cout << lcm(a, b) << "\n";
	return 0;
}