#include <bits/stdc++.h>

using namespace std;

int main()
{


	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, v[100010];
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
		
		int maior = v[0], best = -99999999;

		for (int i = 1; i < n; i++)
		{
			if (maior - v[i] > best)
				best = maior - v[i];
			maior = max(maior, v[i]);
		}

		printf("%d\n", best);
	}

	return 0;
}
