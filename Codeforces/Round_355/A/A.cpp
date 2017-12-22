#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, h, val, ans = 0;
	scanf("%d %d", &n, &h);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &val);
		if (val <= h)
			ans++;
		else	
			ans+= 2;
	}
	
	printf("%d\n", ans);
	return 0;
}
