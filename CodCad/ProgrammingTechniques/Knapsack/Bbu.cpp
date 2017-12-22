#include <bits/stdc++.h>

using namespace std;

#define MAXN 1050
#define MAXL 1050

int v[MAXN][2], tb[MAXN][MAXL];

int main()
{
		
	int c, f, teste = 1;
	while(scanf("%d %d", &c, &f), (c or f))
	{
		memset(tb, 0, sizeof tb);
		
		for (int i = 0; i < f; i++)
			scanf("%d %d", &v[i][0], &v[i][1]);

		for (int w = 0; w <= c; w++)
			if (w - v[0][0] >= 0)
				tb[0][w] = v[0][1];
		
		for (int i = 1; i < f; i++)
		{
			for (int w = 0; w <= c; w++)
			{
				if ((w - v[i][0]) >= 0)
					tb[i][w] = max(tb[i-1][w], v[i][1] + tb[i-1][w - v[i][0]]);
				else
					tb[i][w] = tb[i-1][w];
			}
		}

		printf("Teste %d\n", teste++);
		printf("%d\n\n", tb[f-1][c]);
	}

	return 0;		
}
