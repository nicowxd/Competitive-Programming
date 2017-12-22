#include <bits/stdc++.h>

using namespace std;

int main()
{

	long int n, k, m, a[1234], fk[1234];
	scanf("%ld %ld %ld", &n, &k, &m);
	
	for (long int i = 0; i < n; i++)
		scanf("%ld", a+i);
	
	for (long int i = 0; i < n; i++)
		scanf("%ld", fk + i);
	
	for (long int i = n; i < k; i++)
	{
		fk[i] = 0;
		for (int j = 1; j <= n; j++)
			fk[i] += a[j-1]*(fk[i-j]%m);
	}
	
	printf("%ld\n", fk[k-1] % m);
	return 0;
}
