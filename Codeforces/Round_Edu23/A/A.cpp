#include <bits/stdc++.h>

using namespace std;

int main()
{

	int x1,y1,x2,y2,x,y;
	
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d", &x, &y);
	
	int dx = abs(x1-x2);
	int dy = abs(y1-y2);
	
	if (dx % x or dy % y)
		printf("NO\n");
	else
	{
		int u = dx/x;
		int v = dy/y;
		
		if ((u + v) & 1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
