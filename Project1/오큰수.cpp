#include <bits/stdc++.h>
using namespace std;

int Result[1000004];
int V[1000004];
int A;
int B;
int Ans;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> A;

	for (int i = 0; i < A; ++i)
	{
		cin >> V[i];
		
	}
	
	while (1)
	{
		
		for (int i = Ans; i < A; ++i)
		{
			if (i + 1 == A)
			{
				Result[Ans] = -1;
				++Ans;
				break;
			}
			
			else if (V[Ans] < V[i + 1])
			{
				
				Result[Ans] = V[i+1];
				++Ans;
				break;
			}
		
		}
		if (Ans == A)
		{
			break;
		}
	}

	for (int i = 0; i < A; ++i)
	{
		cout << Result[i] << " ";
	}

	return 0;
}