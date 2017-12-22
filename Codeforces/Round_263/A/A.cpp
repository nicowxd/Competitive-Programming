#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans;
	char grid[100][100];
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", grid[i]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ans = 0;
			if (i-1 >= 0 and grid[i-1][j] == 'o')
				ans++;
			if (j-1 >= 0 and grid[i][j-1] == 'o')
				ans++;
			if (i+1 < n and grid[i+1][j] == 'o')
				ans++;
			if (j+1 < n and grid[i][j+1] == 'o')
				ans++;
	
			if (ans % 2)
			{
				puts("NO");
				return 0;
			}
		}
	}
	puts("YES");

	return 0;
}
