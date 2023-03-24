#include <iostream>

using namespace std;

int go(int a)
{
	if (1 == a)
		return 1;

	return a + go(a - 1);
}

int main()
{

	cout <<	go(100);
}