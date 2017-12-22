#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, caso = 1;
	while(scanf("%d", &n) and n != -1)
	{
		double l[7];
		int g[7], y[7], r[7], sum[7];
	
		for (int i = 0; i < n; i++)
		{
			scanf("%lf %d %d %d", l+i, g+i, y+i, r+i);
			sum[i] = (g[i] + y[i] + r[i]);
		}

		bool v[32] = {0}, fail = true;
		
		for (int j = 30; j <= 60; j++)
		{
			bool ok = true;
			for (int i = 0; i < n and ok; i++)
			{
				double x = ((l[i]*60)/j)*60;
				int div = x/sum[i];
				x -= div*sum[i];
				if ((x - (g[i]+y[i])) <= 0.0 or (x - sum[i]) == 0.0)
					continue;
				else
					ok = false;
			}
			
			if (ok)
			{
				v[j-30] = true;
				fail = false;
			}
		}
		
		bool first = true;
		printf("Case %d", caso++);

		if (fail)
			printf(": No acceptable speeds.\n");
		else
		{
			for (int i = 0; i <= 30; i++)
			{
				if (v[i] == true)
				{
					int j = i;
					while (v[j] == true)
						j++;
					if (j-1 == i)
						printf("%c %d", first ? ':' : ',', 30+i);
					else
					{
						printf("%c %d-%d", first ? ':' : ',', 30+i, 30+j-1);
						i = j;
					}
					first = false;
				}
			}
			printf("\n");
		}
	}

	return 0;
}
