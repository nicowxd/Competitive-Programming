#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	while(scanf("%d %d", &n, &m), (n or m))
	{
		int a[30], b[30], c[30], p[8];
		
		for (int i = 0; i < m; i++)
			scanf("%d %d %d", a+i, b+i, c+i);
		
		for (int i = 0; i < n; i++)
			p[i] = i;
		
		int ans = 0;
		
		do 
		{
			int pos[8];
			bool fail = false;
			for (int i = 0; i < n; i++)
				pos[p[i]] = i;	
			
			for (int i = 0; i < m and !fail; i++)
			{
				if (c[i] >= 0 and abs(pos[a[i]] - pos[b[i]]) <= c[i])
					continue;
				else if (c[i] <= 0 and abs(pos[a[i]] - pos[b[i]]) >= -c[i])
					continue;
				else
					fail = true;
			}
			if (!fail)
				ans++;		
		}
		while(next_permutation(p, p + n));
		
		printf("%d\n", ans);
	}

	return 0;
}
