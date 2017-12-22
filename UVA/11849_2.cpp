#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k, ans;
	bool visited[100000005];
	while(scanf("%d %d", &n, &m), n || m)
	{
		memset(visited, 0, sizeof visited);
		ans = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &k);
			visited[k] = 1;
		}
		for(int i = 0; i < m; i++)
		{
			scanf("%d", &k);
			if (visited[k]) ans++;
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
