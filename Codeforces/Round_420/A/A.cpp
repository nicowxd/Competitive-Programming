#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[55][55], ans = 1;
	scanf("%d", &n);
		
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &v[i][j]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] != 1)
			{
				bool ok = false;
				for (int k = 0; k < n; k++)
				{
					for (int l = 0; l < n; l++)
					{
						if (v[i][j] == v[i][k]+v[l][j])
							ok = true;
					}
				}
				if (!ok)
					ans = 0;
			}
		}
	}

	if (ans)
		puts("Yes");
	else
		puts("No");
	return 0;
}
