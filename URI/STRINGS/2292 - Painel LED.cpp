#include <bits/stdc++.h>

using namespace std;

long long power (int x)
{
	long long ans = 1;

	for (int i = 1; i <= x; i++)
		ans *= 2;
	return ans;
}

int main()
{

	int n;
	string s;
	long long c;

	scanf("%d", &n);

	while(n--)
	{
		getchar();

		cin >> s >> c;	
		
		int len = (int) s.size();
		long long l = 0LL;

		for (int i = 0; i < len; i++)
		{
			if (s[i] == 'O')
				l += power(i);
		}

		long long ans = l + c;
		
		for (int i = 0; i < len; i++)
		{	
			if (ans & (1LL << i))
				printf("O");
			else
				printf("X");
		}

		printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
