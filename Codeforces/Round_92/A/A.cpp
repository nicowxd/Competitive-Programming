#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	
	int ans = 0;
	for (int i = 0+a; i < n; i++)
	{
		if (n-1-i <= b)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
