#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x1, y1, x2, y2;
	scanf("%d", &n);
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);

	if ((x1 <= n/2 and x2 > n/2) or (x2 <= n/2 and x1 > n/2))
		printf("S\n");
	else if ((y1 <= n/2 and y2 > n/2) or (y2 <= n/2 and y1 > n/2))
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
