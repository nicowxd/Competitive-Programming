#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	
	bool flag = true, prime;
	for (int i = n+1; i < m; i++)
	{
		prime = true;
		for (int j = 2; j < i and prime; j++)
		{
			if ((i % j) == 0)
				prime = false;
		}
		if (prime)
		{
			printf("NO\n");
			return 0;
		}
	}

	for (int i = 2; i < m; i++)
	{
		if ((m % i) == 0)
			flag = false;
	}

	if (flag)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
