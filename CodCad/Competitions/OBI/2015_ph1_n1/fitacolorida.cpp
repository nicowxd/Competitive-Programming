#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[12345], ind[12345];
	scanf("%d", &n);

	int k = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", v+i);
		if (v[i] == 0)
			ind[k++] = i;
	}

	for (int i = 0; i < n; i++)
	{
		if (v[i] == -1)
		{
			int ans = 1e9;
			for (int j = 0; j < k; j++)
				ans = min(ans, min(9, abs(ind[j] - i))); 
			printf("%d ", ans);
		}
		else
			printf("0 ");
	}
	printf("\n");
	return 0;
}
