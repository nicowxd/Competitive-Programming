#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int m, n, q, r, c;
		char mat[110][110];

		scanf("%d %d %d%*c", &m, &n, &q);
	
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
				scanf("%c", &mat[i][j]);
			getchar();
		}
		
		printf("%d %d %d\n", m, n, q);
		for (int i = 0; i < q; i++)
		{
			scanf("%d %d", &r, &c);
			
			int ans = 1;
			char ac = mat[r][c];
	
			for (int j = 1; ; j++)
			{
				bool flag = true;
				
				if (r - j < 0 or r + j >= m or c - j < 0 or c + j >= n)
					break;
				
				for (int k = r-j; k <= r+j and flag; k++)
					for (int l = c-j; l <= c+j and flag; l++)
						if (mat[k][l] != ac)
							flag = false;
				if (flag)
					ans = (2*j + 1);
			}

			printf("%d\n", ans);
		}
	}

	return 0;
}
