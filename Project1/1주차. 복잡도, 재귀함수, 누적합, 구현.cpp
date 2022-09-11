#include"Include.h"

using namespace std;
//
//int a[100004], b, c, psum[100004], n, m;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> a[i];
//		psum[i] = psum[i - 1] + a[i];
//	}
//
//	for (int i = 1; i <= m; ++i)
//	{
//		cin >> b >> c;
//		cout << psum[c] - psum[b - 1] << "\n";
//	}
//	return 0;
//}
int main()
{
	string dopa = "life is limited";
	string Q1 = dopa.substr(0, 3);

	cout << Q1 << " ";

	cout << "\n";
	reverse(dopa.begin(), dopa.end());
	cout << dopa << "\n";
	string Q3 = dopa + " dopa!!";
	cout << Q3;

}