#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, k;

	scanf("%d %d %d", &n, &m, &k);

	int v[m+1];

	for (int i = 0; i <= m; i++)
		scanf("%d", v+i);
	
	int ans = 0; 

	for (int i = 0; i < m; i++)
	{
		int diff = 0;
		
		for (int j = 0; j < n; j++)
		{
			if ((v[i] & (1 << j)) != (v[m] & (1 << j)))
				diff++;
		}

		if (diff <= k)
			ans++;
	}

	printf("%d\n", ans);
	
	return 0;
}
