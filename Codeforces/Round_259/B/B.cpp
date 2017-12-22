#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, v[100010];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	int ans = 0;
	bool flag = false;
	for (int i = 1; i < n; i++)
	{
		if (v[i] < v[i-1])
		{
			if (flag)
			{
				puts("-1");
				return 0;
			}
			else
			{
				flag = true;
				ans = n-i;
			}
		}
	}

	if (flag && v[n-1] > v[0])
		puts("-1");
	else
		printf("%d\n", ans);
	return 0;
}
