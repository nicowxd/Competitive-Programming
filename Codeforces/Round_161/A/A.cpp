#include <bits/stdc++.h>

using namespace std;

int main()
{
	int r, c, val;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			scanf("%d", &val);
			if (val == 1)
			{
				r = i;
				c = j;
			}
		}
	}

	printf("%d\n", abs(r-3) + abs(c-3));
	return 0;
}
