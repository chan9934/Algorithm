#include <iostream>

using namespace std;

int Fac(int n)
{
	if (n == 1 || n == 0)
	{
		return 1;
	}

	return n * Fac(n - 1);
}

int Fibo(int n)
{
	if (1 == n || 0 == n)
	{
		return n;
	}

	return Fibo(n - 1) + Fibo(n - 2);
}