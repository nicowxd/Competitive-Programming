#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool itsPrime(int n)
{
	if (n == 1 or n == 0) return 0;
	
	for (ll i = 2; i*i <= (ll) n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	
	return 1;
}


int main()
{

	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		if (itsPrime(i))
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
