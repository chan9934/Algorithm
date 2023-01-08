//문제
//상근이는 트럭을 총 세 대 가지고 있다.오늘은 트럭을 주차하는데 비용이 얼마나 필요한지 알아보려고 한다.
//
//상근이가 이용하는 주차장은 주차하는 트럭의 수에 따라서 주차 요금을 할인해 준다.
//
//트럭을 한 대 주차할 때는 1분에 한 대당 A원을 내야 한다.두 대를 주차할 때는 1분에 한 대당 B원, 세 대를 주차할 때는 1분에 한 대당 C원을 내야 한다.
//
//A, B, C가 주어지고, 상근이의 트럭이 주차장에 주차된 시간이 주어졌을 때, 주차 요금으로 얼마를 내야 하는지 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 문제에서 설명한 주차 요금 A, B, C가 주어진다. (1 ≤ C ≤ B ≤ A ≤ 100)
//
//다음 세 개 줄에는 두 정수가 주어진다.이 정수는 상근이가 가지고 있는 트럭이 주차장에 도착한 시간과 주차장에서 떠난 시간이다.도착한 시간은 항상 떠난 시간보다 앞선다.입력으로 주어지는 시간은 1과 100사이 이다.
//
//출력
//첫째 줄에 상근이가 내야하는 주차 요금을 출력한다.
//
//예제 입력 1
//5 3 1
//1 6
//3 5
//2 8
//예제 출력 1
//33
//예제 입력 2
//10 8 6
//15 30
//25 50
//70 80
//예제 출력 2
//480
//#include<bits/stdc++.h>
//
//using namespace std;
//int M[3], A[2], B[2], C[2], T[100], Sum;
//
//int main()
//{
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> M[i];
//	}
//	for (int i = 0; i < 2; ++i)
//	{
//		cin >> A[i];
//	}
//	for (int i = 0; i < 2; ++i)
//	{
//		cin >> B[i];
//	}
//	for (int i = 0; i < 2; ++i)
//	{
//		cin >> C[i];
//	}
//
//	for (int i = 1; i < 100; ++i)
//	{
//		if (A[0] <= i && i < A[1])
//		{
//			++T[i];
//		}
//		if (B[0] <= i && i < B[1])
//		{
//			++T[i];
//		}
//		if (C[0] <= i && i < C[1])
//		{
//			++T[i];
//		}
//
//		if (A[1] <= i && B[1] <= i && C[1] <= i)
//		{
//			break;
//		}
//		
//	}
//	for (int i : T)
//	{
//		if (3 == i)
//		{
//			Sum += 3 * M[2];
//		}
//		if (2 == i)
//		{
//			Sum += 2 * M[1];
//		}
//		if (1 == i)
//		{
//			Sum += 1 * M[0];
//		}
//	}
//	
//	cout << Sum;
//	
//}
//#include "bits/stdc++.h"
//using namespace std;
//
//int A, B, C, a, b, T[104], ret;
//
//int main()
//{
//	cin >> A >> B >> C;
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> a >> b;
//		for (int j = a; j < b; ++j)
//		{
//			++T[j];
//		}
//	}
//
//	for (int i : T)
//	{
//		if (i)
//		{
//			if (3 == i)
//			{
//				ret += 3 * C;
//			}
//			if (2 == i)
//			{
//				ret += 2 * B;
//			}
//			if (1 == i)
//			{
//				ret += 1 * A;
//			}
//		}
//	}
//	cout << ret;
//	return 0;
//}
#include <iostream>
#include <algorithm>

using namespace std;

int A[104];

int Q, W, E;

int x, y;

int Sum;

int main()
{
	cin >> Q >> W >> E;

	for (int i = 0; i < 3; ++i)
	{
		cin >> x >> y;

		for (int j = x + 1; j <= y; ++j)
		{
			++A[j];
		}

	}

	for (int a : A)
	{
		if (a == 0)
		{
			continue;
		}
		if (a == 1)
		{
			Sum += Q;
		}

		else if (a == 2)
		{
			
			Sum += 2 * W;
		}
		else if (a == 3)
		{
			Sum += 3 * E;
		}

	}

	cout << Sum;


}