#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, v[110], w[110], memo[110][60];
		scanf("%d", &n);

		for (int i = 1; i <= n; i++)
			scanf("%d %d", v+i, w+i);
		
		memset(memo, 0, sizeof memo);

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= 50; j++)
			{
				memo[i][j] = memo[i-1][j];
				if (j >= w[i])
					memo[i][j] = max(memo[i][j], v[i] + memo[i-1][j-w[i]]);
			}
		}
		
		int peso = 0, qty = 0, row = n, col = 50;

		while (row > 0 and col > 0)
		{
			if (memo[row][col] != memo[row-1][col])
			{
				peso += w[row];
				col -= w[row];
				qty++;
			}
			row--;
		}

		printf("%d brinquedos\n", memo[n][50]);
		printf("Peso: %d kg\n", peso);
		printf("sobra(m) %d pacote(s)\n\n", n-qty);
	}
	
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
