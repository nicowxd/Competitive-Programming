#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, s, t, v[100010];
	scanf("%d %d %d", &n, &s, &t);

	for (int i = 1, x; i <= n; i++)
		scanf("%d", &v[i]);

	if (s == t)
		puts("0");
	else
	{
		vector<bool> vis(n+1, false);
		bool flag = false;
		int ans = 0, ac = s;

		while(!vis[ac] and !flag)
		{
			vis[ac] = true;
			ans++;
			ac = v[ac];
			if (ac == t)
				flag = true;
		}
		
		if (flag)
			printf("%d\n", ans);
		else
			printf("-1\n");
	}

	return 0;
}
