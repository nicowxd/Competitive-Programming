#include <bits/stdc++.h>

using namespace std;

int main()
{

	int grid[5][5] = {0}, lgt;

	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			scanf("%d", &lgt);
			if (lgt % 2)
			{
				grid[i][j]++;
				grid[i-1][j]++;
				grid[i+1][j]++;
				grid[i][j-1]++;
				grid[i][j+1]++;
			}
		}
	}

	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (grid[i][j] % 2)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	return 0;
}
