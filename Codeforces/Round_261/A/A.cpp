#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x0, y0, x1, y1;
	scanf("%d %d %d %d", &x0, &y0, &x1, &y1);
	if (abs(x0-x1) != abs(y0-y1) && (x0 != x1) && (y0 != y1))
		printf("-1\n");
	else if (x0 == x1)
	{
		printf("%d %d %d %d\n", x0 + abs(y0-y1), y0,  x1 + abs(y0-y1), y1);
	}
	else if (y0 == y1)
	{
		printf("%d %d %d %d\n", x0, y0+abs(x0-x1), x1, y1+abs(x0-x1));
	}
	else
	{
		printf("%d %d %d %d\n", x0, y1, x1, y0);
	}
	return 0;
	
}
