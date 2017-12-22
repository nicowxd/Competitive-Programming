#include <bits/stdc++.h>

using namespace std;

int main()
{

	int xm, ym, xr, yr;
	scanf("%d %d %d %d", &xm, &ym, &xr, &yr);

	int ans = abs(xm-xr) + abs(ym-yr);
	printf("%d\n", ans);
	return 0;
}
