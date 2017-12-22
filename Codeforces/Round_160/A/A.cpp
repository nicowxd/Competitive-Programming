#include <bits/stdc++.h>

using namespace std;

bool hasMore(int x, int k)
{
	int cnt = 0;
	while(x)
	{
		if (x % 10 == 4 or x % 10 == 7)
			cnt++;
		x/=10;
	}
	if (cnt <= k)
		return false;
	else
		return true;
}

int main()
{

	int n, k, v[123];
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (!(hasMore(v[i], k)))
			ans++;
	}

	printf("%d\n", ans);
			
	return 0;
}
