#include <bits/stdc++.h>

using namespace std;

bitset<10000010> bs;

void crivo(long long int n)
{
	bs.set();
	bs[0] = bs[1] = 0;
	for (long long int i = 2; i <= n; i++)
	{
		if (bs[i])
		for (long long int j = i*i; j <= n; j+=i)
			bs[j] = 0;
	}
}


int main()
{

	int n;
	scanf("%d", &n);
	crivo(n);

	for (int i = 1; i <= n; i++)
	{
		if (bs[i])
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
