#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	long long v[1010];
	unordered_map<long long, int> m;
	
	while(scanf("%d", &n), n)
	{
		m.clear();
		long long foo, ans;
		
		for (int i = 0; i < n; i++)
		{
			scanf("%lld", v + i);
			m[v[i]] = 1;
		}
		
		sort(v, v + n);
		bool ok = true;

		for (int i = n-1; i >= 0 and ok; i--)
		{
			for (int j = 0; j < n and ok; j++)
			{
				if (i == j)
					continue;
				for (int k = j + 1; k < n and ok; k++)
				{
					if (i == k)
						continue;
					long long c = v[i] - (v[j] + v[k]);
					if (c == v[i] or c == v[j] or c == v[k])
						continue;
					else 
					{
						if ((m.count(v[i]-(v[j]+v[k]))))
						{
							printf("%lld\n", v[i]);
							ok = false;
						}
					}
				}
			}
		}
		
		if (ok)
			puts("no solution");
	}
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
