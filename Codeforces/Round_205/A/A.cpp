#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, l, r, s1 = 0, s2 = 0, check = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &l, &r);
		s1 += l;
		s2 += r;
		if ((l&1 and r%2 == 0) or (l%2 == 0 and r&1))
			check = 1;
	}

	if (s1 % 2 == 0 and s2 % 2 == 0)
		printf("0\n");
	else
	{
		if (s1&1 and s2&1)
		{
			if (check)
				printf("1\n");
			else
				printf("-1\n");
		}
		else
			printf("-1\n");
	}
	
	return 0;
}
