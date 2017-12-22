#include <bits/stdc++.h>

using namespace std;

int main()
{

	int r, c, ans = 0;
	bool flag;	
	scanf("%d %d", &r, &c);
	char grid[r+5][c+5];
	int visited[r+5][c+5];
	memset(visited, 0, sizeof visited);
	for (int i = 0; i < r; i++)
	{
		scanf("%s", grid[i]);
	} 
	for (int i = 0; i < r; i++)
	{
		flag = true;
		for (int j = 0; j < c; j++)
		{
			if (grid[i][j] == 'S')
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			for (int j = 0; j < c; j++)
			{
				if (visited[i][j] == 0)
				{
					visited[i][j] = 1;
					ans++;
				}
			}
		}
	}
	
	for (int i = 0; i < c; i++)
	{
		flag = true;
		for (int j = 0; j < r; j++)
		{
			if (grid[j][i] == 'S')
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			for (int j = 0; j < r; j++)
			{	
				if (visited[j][i] == 0)
				{
					visited[j][i] = 1;
					ans++;
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}		
