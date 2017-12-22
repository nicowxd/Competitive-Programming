#include <bits/stdc++.h>

using namespace std;

int main()
{

	int f, r;

	while(scanf("%d", &f) && f)
	{
		int front[110], rear[110];
		scanf("%d", &r);
		
		for (int i = 0; i < f; i++)
			scanf("%d", front+i);
		
		for (int i = 0; i < r; i++)
			scanf("%d", rear+i);
		
		int x = 0;
		double driveR[10100];

		for (int i = 0; i < f; i++)
			for (int j = 0; j < r; j++)
				driveR[x++] = (double) rear[j]/front[i];

		sort(driveR, driveR + x);

		double ans = 0;

		for (int i = 1; i < x; i++)
		{
			if (driveR[i]/driveR[i-1] > ans)
				ans = driveR[i]/driveR[i-1];
		}

		printf("%.2lf\n", ans);
	}

	return 0;
}
