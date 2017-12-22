#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, v[1234] = {0};

	scanf("%d", &n);

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v[x]++;
		ans = max(ans, v[x]);
	}
	
	if (n % 2 and ans <= (n/2)+1)
		puts("YES");
	else if (n % 2 == 0 and ans <= n/2)
		puts("YES");
	else
		puts("NO");
	return 0;
}
