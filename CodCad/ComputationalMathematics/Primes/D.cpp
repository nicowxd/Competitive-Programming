#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);

	for (int i = 1; i <= sqrt(c); i++)
	{
		if ((((i*a) % a) == 0) and (((i*a) % b) != 0) and (c % (i*a) == 0) and ((d % (i*a) != 0)))
		{
			printf("%d\n", i*a);
			return 0;
		}
	}

	printf("-1\n");
	return 0;
}
