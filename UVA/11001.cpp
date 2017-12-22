#include <bits/stdc++.h>

using namespace std;

#define EPS 1e-8

int main()
{
	int vt, vo;

	while(scanf("%d %d", &vt, &vo), (vt or vo))
	{
		int ans = 0;
		double best = 0.0;
	
		for (int i = 1; i <= vt; i++)
		{
			double v = (double)vt/i;
			if (v > vo)
			{
				double p = 0.3*sqrt(v-vo)*i;
				if (fabs(p - best) < EPS)
					ans = 0;
				else if (p > best)
				{
					ans = i;
					best = p;
				}
				else if (p < best)
					break;
			}
			else
				break;
		}
		printf("%d\n", ans);
	}

	return 0;
}
