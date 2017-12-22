#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	scanf("%d %d%*c", &n, &m);

	char v[123][123];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%c", &v[i][j]);
		getchar();
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] == '.')
			{
				if ((i+j)&1)
					printf("W");
				else
					printf("B");
			}
			else
				printf("%c", v[i][j]);
		}
		printf("\n");
	}

	return 0;
}
