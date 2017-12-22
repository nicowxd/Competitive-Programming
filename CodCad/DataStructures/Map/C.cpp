#include <bits/stdc++.h>

using namespace std;

int main()
{

	
	int n, d, v[2000200];
	scanf("%d %d", &n, &d);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", v+i);
		v[n+i] = v[i];
	}
	
	int j = 0, sum = 0, ans = 0;

	for (int i = 0; i < n; i++)
	{
		while(sum < d and j < n + i)
			sum += v[j++];
		if (sum == d)
			ans++;
		sum -= v[i];
	}

	printf("%d\n", ans);
	return 0;
}
