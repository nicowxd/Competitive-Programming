#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c;
	scanf("%d", &c);

	while(c--)
	{
		int n, d, k, v[100], p = 0, x;
		scanf("%d", &n);

		for (int i = 0; i <= n; i++)
			scanf("%d", v+i);
		scanf("%d", &d);
		scanf("%d", &k);
		
		long long ans = 0;
		
		for (int i = 1; ; i++)
		{
			int previous = p;
			p += i*d;
			if (previous < k and k <= p)
			{
				x = i;
				break;
			}
		}
			
		long long currentexp = 1LL;
		for (int i = 0; i <= n; i++)
		{
			ans += (v[i]*currentexp);
			currentexp *= x;
		}
		
		printf("%lld\n", ans);
	}

	return 0;
}
