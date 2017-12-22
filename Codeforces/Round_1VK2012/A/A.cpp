#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, part[55];
	scanf("%d %d", &n, &k);
		
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &part[i]);
	}
	int score = part[k], ans = 0;
	
	for (int i = 1; i <= n; i++)
	{
		if (part[i] >= score && part[i] != 0)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
