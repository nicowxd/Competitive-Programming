#include <bits/stdc++.h>

using namespace std;

bool lucky(int x)
{
	int acc;
	while(x)
	{
		acc = x % 10;
		if (acc != 4 && acc != 7)
		{
			return 0;
		}
		x/=10;
	}
	return 1;
}
		

int main()
{
	int n, ans;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (!(n % i) && lucky(i))
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
		
		
