#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	long long v[1123456];
	scanf("%d", &n);

	v[0] = 0;
	for (int i = 0; i < n; i++)
	{
		int foo;
		scanf("%d", &foo);
		v[i+1] = v[i] + foo;
	}
	
	long long ans = 0;
	if (v[n] % 3 == 0)
	{
		long long x = v[n] / 3, y = 2 * v[n] / 3;
		long long cnt = 0;

		for (int i = 1; i < n; i++)
		{
			if (v[i] == y) {
				ans += cnt;
			}
			if (v[i] == x)
				cnt++;
		}
	}

	cout << ans << endl;

	return 0;
}
