#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main()
{

	int f[7], n;
	scanf("%d %d", &f[0], &f[1]);
	scanf("%d", &n);

	for (int i = 2; i < 6; i++)
		f[i] = ((f[i-1] - f[i-2]))%MOD;
	printf("%d\n", (f[(n-1)%6] + MOD) % MOD);
	return 0;
}
