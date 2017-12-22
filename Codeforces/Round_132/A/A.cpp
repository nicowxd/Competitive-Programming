#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, a[60], b[60], v[12345] = {0}, ans = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", a+i);
	
	scanf("%d", &m);
	
	for (int i = 0; i < m; i++)
		scanf("%d", b+i);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (!(b[j]%a[i]))
			{
				ans = max(ans, b[j]/a[i]);
				v[b[j]/a[i]]++;
			}
		}
	}
	
	printf("%d\n", v[ans]);
	return 0;
}
