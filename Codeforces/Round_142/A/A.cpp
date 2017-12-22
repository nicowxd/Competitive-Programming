#include <bits/stdc++.h>

using namespace std;

int main()
{
	int s, n;
	pair<int, int> drag[10010];
	scanf("%d %d", &s, &n);	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &drag[i].first, &drag[i].second);
	}
	sort(drag, drag+n);
	
	for (int i = 0; i < n; i++)
	{
		if (s <= drag[i].first)
		{
			printf("NO\n");
			return 0;
		}
		else
		{
			s+= drag[i].second;
		}
	}
	printf("YES\n");
	return 0;
}
