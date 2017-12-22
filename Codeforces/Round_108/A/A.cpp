#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, m;
	set<int> ans;
	string v[110];
	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int x = v[j][i] - '0';
			bool big = true;
			for (int k = 0; k < n and big; k++)
			{
				if (k == j)
					continue;
				else
				{
					int y = v[k][i] - '0';
					if (y > x)
						big = false;
				}
			}
			if (big)
				ans.insert(j);
		}
	}
	
	printf("%d\n", (int) ans.size());

	return 0;
}
