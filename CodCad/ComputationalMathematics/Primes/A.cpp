#include <bits/stdc++.h>

using namespace std;

int isPrime(long long int x)
{
	if (x == 1) return 0;
	for (long long int i = 2; i*i <= x; i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

int main()
{

	long long int n;
	scanf("%lld", &n);
	if (isPrime(n))
		printf("S\n");
	else
		printf("N\n");		
	return 0;
}
