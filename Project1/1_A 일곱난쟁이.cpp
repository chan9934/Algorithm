//����
//�պ� ���� �ϰ� �����̵�� �Բ� ��ȭ�Ӱ� ��Ȱ�ϰ� �ִ� �鼳���ֿ��� ���Ⱑ ã�ƿԴ�.�ϰ��� ��ġ�� ���ƿ� �����̰� �ϰ� ���� �ƴ� ��ȩ ���̾��� ���̴�.
//
//��ȩ ���� �����̴� ��� �ڽ��� "�鼳 ���ֿ� �ϰ� ������"�� ���ΰ��̶�� �����ߴ�.�پ ������ �������� ������ �ִ� �鼳���ִ�, ���ེ���Ե� �ϰ� �������� Ű�� ���� 100�� ���� ����� �´�.
//
//��ȩ �������� Ű�� �־����� ��, �鼳���ָ� ���� �ϰ� �����̸� ã�� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//��ȩ ���� �ٿ� ���� �����̵��� Ű�� �־�����.�־����� Ű�� 100�� ���� �ʴ� �ڿ����̸�, ��ȩ �������� Ű�� ��� �ٸ���, ������ ������ ���� ������ ��쿡�� �ƹ��ų� ����Ѵ�.
//
//���
//�ϰ� �������� Ű�� ������������ ����Ѵ�.�ϰ� �����̸� ã�� �� ���� ���� ����.

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
int a[9];
int Asum;
pair<int, int> ret;
//
//int main()
//{
//	for (int i = 0; i < 9; i++) {
//		cin >> a[i];
//	}
//	vector<int>v;
//
//	for (int i = 0; i < 9; ++i)
//	{
//		v.push_back((a[i]));
//	}
//	sort(v.begin(), v.end());
//
//	int sum = accumulate(v.begin(), v.end(), 0);
//
//	for (int i = 0; i < 9; ++i)
//	{
//		for (int j = i + 1; j < 9; ++j)
//		{
//			if (v[i] + v[j] == sum - 100)
//			{
//				v.erase(v.begin() + j, v.begin() + j + 1);
//				v.erase(v.begin() + i, v.begin() + i + 1);
//				break;
//
//			}
//		}
//		if (v.size() != 9)
//		{
//			break;
//		}
//	}
//
//	for (int a : v)
//	{
//		cout << a << " ";
//	}
//
//	
//
//}
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	for (int i = 0; i < 9; ++i)
//	{
//		cin >> a[i];
//	}
//
//	sort(a, a + 9);
//
//	do 
//	{
//		int sum = 0;
//		for (int i = 0; i < 7; ++i)
//		{
//			sum += a[i];
//		}
//
//		if (sum == 100)
//		{
//			break;
//		}
//	} while (next_permutation(a, a + 9));
//
//	for (int i = 0; i < 7; ++i)
//	{
//		cout << a[i] << "\n";
//	}
//	return 0;
//
//}
void Solve()
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = i + 1; j < 9; ++j)
		{
			if (Asum - 100 == a[i] + a[j])
			{
				ret = { i, j };
				return; 
			}
		}
	}
}
int main()
{
	for (int i = 0; i < 9; ++i)
	{
		cin >> a[i];
	}
	vector<int> v;
	for (int i : a)
	{
		Asum += i;
	}

	Solve();
	for (int i = 0; i < 9; ++i)
	{
		if (i == ret.first || i == ret.second)
		{
			continue;
		}
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << "\n";
	return 0;

}