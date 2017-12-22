#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	for (int i = 0; i < 2*n +1; i++)
	{
		int stop;
		if (i <= n)
		{
			stop = (4*i) + 1;
			for (int j = 0; j < 2*(n-i); j++)
				printf(" ");
		}
		else
		{
			stop = (2*n-i)*4 + 1;
			for (int j = 0; j < (i-n)*2; j++)
				printf(" ");
		}
		int k = 0;
		for (int j = 0; j < stop; j++)
		{
			if (!(j&1) and j <= stop/2)
			{
				printf("%d", k);
				if (j != stop/2)
					k++;
			}
			else if (!(j&1) and j > stop/2)
				printf("%d", --k);
			if (!(j&1) and j != stop-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
