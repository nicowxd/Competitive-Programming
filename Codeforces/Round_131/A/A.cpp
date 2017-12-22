#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, ans = 0;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i <= 100; i++)
	{
		for (int j = 0; j <= 100; j++)
		{
			if (i*i + j == n and i + j*j == m)
				ans++;
		}
	}
		
	printf("%d\n", ans);
	return 0;
}
