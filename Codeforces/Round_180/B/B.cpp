#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t, sx, sy, ex, ey;
	char c;
	
	scanf("%d %d %d %d %d", &t, &sx, &sy, &ex, &ey);
	
	for (int i = 1; i <= t; i++)
	{
		scanf(" %c", &c);

		if (c == 'N' and sy < ey)
			sy++;
		else if (c == 'S' and sy > ey)
			sy--;
		else if (c == 'E' and sx < ex)
			sx++;
		else if (c == 'W' and sx > ex)
			sx--;
		if (sx == ex and sy == ey)
		{
			printf("%d\n", i);
			return 0;
		}
	}

	printf("-1\n");
			
	return 0;
}
