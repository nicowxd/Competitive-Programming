#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, c = 1;
	while(scanf("%d", &n) && n)
	{
		if (c++ > 1)
			printf("\n");	
		bool flag = false;
		for (int fghij = 1234; fghij <= 98765/n; fghij++)
		{
			int abcde = fghij*n;
			int tmp, used = (fghij < 10000);
			tmp = abcde;
			while(tmp)
			{
				used |= (1 << tmp%10);
				tmp /= 10;
			}
			tmp = fghij;
			while(tmp)
			{
				used |= (1 << tmp%10);
				tmp /= 10;
			}
			if (used == (1 << 10) - 1)
			{
				printf("%0.5d / %0.5d = %d\n", abcde, fghij, n);
				flag = true;
			}
		}

		if (!flag)
			printf("There are no solutions for %d.\n", n);
	}

	return 0;
}
