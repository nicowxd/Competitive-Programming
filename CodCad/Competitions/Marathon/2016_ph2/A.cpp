#include <bits/stdc++.h>

using namespace std;

int main()
{

	int x1, x2, x3, x4, ans = 1e9;
	scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
	
	if (abs((x1+x2)-(x3+x4)) < ans)
		ans = abs((x1+x2) - (x3+x4));
	if (abs((x1+x3) - (x2+x4)) < ans)
		ans = abs((x1+x3) - (x2+x4));
	if (abs((x1+x4) - (x2+x3)) < ans)
		ans = abs((x1+x4) - (x2+x3));
	
	printf("%d\n", ans);
	
	return 0;
}
