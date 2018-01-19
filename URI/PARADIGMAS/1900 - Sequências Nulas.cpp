#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	long long sum[100010];
	map<int, long long> f;
	scanf("%d", &n);

	sum[0] = 0;
	f[0] = 1;
	long long ans = 0;
	for (int i = 1, foo; i <= n; i++)
	{
		scanf("%d", &foo);
		sum[i] = sum[i-1] + foo;
		ans += f[sum[i]];
		f[sum[i]]++;
	}

	cout << ans << endl;
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
