#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;

int main()
{
	
	int k, idx, ans = 1e9;
	char x[MAXN], y[MAXN];
	
	scanf("%s", x);
	scanf("%d", &k);

	for (int i = 0; i < 5; i++)
	{
		scanf(" %s", y);

		int len = strlen(y), acc = 0;
		for (int j = 0; j < len; j++)
		{
			if (x[j] != y[j])
				acc++;
		}
		
		if (acc < ans)
		{
			idx = i + 1;
			ans = acc;
		}
	}
	
	if (ans > k)
		printf("-1\n");
	else
	{	
		printf("%d\n", idx);
		printf("%d\n", ans);
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
