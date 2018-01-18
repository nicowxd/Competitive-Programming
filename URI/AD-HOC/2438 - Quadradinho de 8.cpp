#include <bits/stdc++.h>

using namespace std;

long long sum[1000001], f[9];

int main()
{

	int n;
	long long ans = 0;
	scanf("%d", &n);
	
	sum[0] = 0; f[0] = 1;
	for (int i = 1, foo; i <= n; i++)
	{
		scanf("%d", &foo);
		sum[i] = (sum[i-1] + foo) % 8;
		ans += f[sum[i]];
		f[sum[i]]++;
	}

	printf("%lld\n", ans);

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
