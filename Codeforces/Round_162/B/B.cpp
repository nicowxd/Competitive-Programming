#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, v[100010];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);

	int ans = 0, h = 0;

	for (int i = 0; i < n; i++)
	{
		int diff = v[i] - h;
		ans += (diff + 1);
		
		if (v[i] <= v[i+1] and (i+1) < n)
		{
			ans += 1;
			h = v[i];
		}
		else if (v[i] > v[i+1] and (i+1) < n)
		{
			ans += (v[i] - v[i+1]) + 1;
			h = v[i+1];
		}
	}

	printf("%d\n", ans);
		
	return 0;
}
