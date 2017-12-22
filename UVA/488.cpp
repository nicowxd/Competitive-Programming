#include <bits/stdc++.h>

using namespace std;

int main()
{


	int t, c = 1;
	scanf("%d", &t);

	while(t--)
	{
		if (c++ > 1)
			printf("\n");
		int amp, freq;
		scanf("%d %d", &amp, &freq);
		
		for (int i = 1; i <= freq; i++)
		{
			if (i > 1)
				printf("\n");
			for (int j = 1; j <= amp; j++)
			{
				for (int k = 1; k <= j; k++)
					printf("%d", j);
				printf("\n");
			}

			for (int j = amp-1; j >= 1; j--)
			{
				for (int k = 1; k <= j; k++)
					printf("%d", j);
				printf("\n");
			}
		}
	}

	return 0;
}
