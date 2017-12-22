#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, ans = 0;
	scanf("%d", &n);
	while(n--)
	{
		int p, q;
		scanf("%d %d", &p, &q);
		
		if (q-p >= 2)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}
