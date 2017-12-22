#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, ctl = 0, lotto[15];
	while(scanf("%d", &n), n)
	{
		if (ctl > 0)
			printf("\n");
		ctl++;
	
		for (int i = 0; i < n; i++)
			scanf("%d", &lotto[i]);
		
		for (int a = 0; a < n - 5; a++)
			for (int b = a + 1; b < n - 4; b++)
				for (int c = b + 1; c < n - 3; c++)
					for (int d = c + 1; d < n - 2; d++)
						for (int e = d + 1; e < n - 1; e++)
							for (int f = e + 1; f < n; f++)
								printf("%d %d %d %d %d %d\n", lotto[a], lotto[b], lotto[c], lotto[d], lotto[e], lotto[f]);
	}
	return 0;
}
