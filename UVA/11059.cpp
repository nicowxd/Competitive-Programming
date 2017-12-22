#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	int n, v[110], c = 1;
	while(scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
		ll ans = 0;

		for (int i = 0; i < n; i++)
		{
			ll x = v[i];
			ans = max(ans, x);
			for (int j = i+1; j < n; j++)
			{
				x*= v[j];
				ans = max(ans, x);
			}
		}
		
		printf("Case #%d: The maximum product is %lld.", c++, ans);
		printf("\n\n");
	}
	return 0;
}
