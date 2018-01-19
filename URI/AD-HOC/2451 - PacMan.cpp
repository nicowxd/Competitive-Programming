#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d ", &n);
	
	char mat[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf("%c", &mat[i][j]);
		getchar();
	}
	
	int ans = 0, sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (i&1)
		{
			for (int j = n-1; j >= 0; j--)
			{
				if (mat[i][j] == '.')
					continue;
				else if (mat[i][j] == 'A')
					sum = 0;
				else
					sum += 1;
				ans = max(ans, sum);
			}
		}
		else
		{
			for (int j = 0; j < n; j++)
			{
				if (mat[i][j] == '.')
					continue;
				else if (mat[i][j] == 'A')
					sum = 0;
				else
					sum += 1;
				ans = max(ans, sum);
			}
		}
	}

	cout << ans << endl;
	
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
