#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, title;
	set<int> CD;
	while(scanf("%d %d", &n, &m), n || m)
	{
		CD.clear();
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &title);
			CD.insert(title);
		}
		
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &title);
			if (CD.find(title) != CD.end())
				ans++;
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
		
