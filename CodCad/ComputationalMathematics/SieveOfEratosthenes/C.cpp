#include <bits/stdc++.h>

using namespace std;

bitset<10000010> bs;
unordered_map<long long int, long long int> primes;

void crivo(int n)
{
	int k = 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (long long int i = 2; i <= n; i++)
	{
		if (bs[i])
		{
			for (long long int j = i*i; j <= n; j+=i)
				bs[j] = 0;
			primes[i] = k++;
		}
	}
}

int main()
{	
	crivo(10000010);
	int q;
	long long int n;
	scanf("%d", &q);
	while(q--)
	{
		scanf("%lld", &n);
		printf("%lld\n", primes[n]);
	}
	return 0;
}
