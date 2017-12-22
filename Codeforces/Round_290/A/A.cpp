#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	bool fim = true, pass = false;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m; j++)
		{
			if (i%2)
			{
				printf("#");
			}
			else
			{
				if (fim && j == m && !pass)
				{
					printf("#");
					fim = false;
					pass = true;
				}
				else if (!fim && j == 1 && !pass)
				{
					printf("#");
					fim = true;
					pass = true;
				}
				else
					printf(".");
			}
			if (j == m)
			printf("\n");
		}
		pass = false;
	}
	return 0;
}
