#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	scanf("%d", &n);
	
	int fib[1010];
	map<long long int, int> m;
	
	m[1] = 1; m[2] = 1;

	fib[0] = 1; fib[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
		m[fib[i]] = 1;
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (m[i] == 1)
			printf("O");
		else
			printf("o");
	}

	printf("\n");

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
