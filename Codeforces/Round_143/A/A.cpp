#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 0;
	scanf("%d", &n);	
	
	for (int i = 0; i < n; i++)
	{
		int cnt, x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		cnt = x + y + z;
		if (cnt >= 2)
			ans++;
	}
	
	printf("%d\n", ans); 
	return 0;
}
