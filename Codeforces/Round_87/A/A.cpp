#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, b, ans = 0, ins = 0;
	scanf("%d", &n);
		
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		ins -= a;
		ins += b;
		if (ins > ans)
			ans = ins;
	}
	
	printf("%d\n", ans);
	return 0;
}
