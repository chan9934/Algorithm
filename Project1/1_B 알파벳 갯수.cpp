//����
//���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����.�� ���ĺ��� �ܾ �� ���� ���ԵǾ� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �ܾ� S�� �־�����.�ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
//
//���
//�ܾ ���ԵǾ� �ִ� a�� ����, b�� ����, ��, z�� ������ �������� �����ؼ� ����Ѵ�.
//
//���� �Է� 1
//baekjoon
//���� ��� 1
//1 1 0 0 1 0 0 0 0 1 1 0 0 1 2 0 0 0 0 0 0 0 0 0 0 0
#include <bits/stdc++.h>
using namespace std;

string Input;
int Output[26];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> Input;
	for (char it : Input)
	{
		++Output[(int)(it - 'a')];
	}

	for (int it : Output)
	{
		cout << it << " ";
	}
}