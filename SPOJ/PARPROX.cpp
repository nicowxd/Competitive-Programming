#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f3f3f

double dist (int x1, int y1, int x2, int y2)
{
	return hypot(x2-x1, y2-y1);
}

int main()
{

	int n;
	pair<int, int> p[1100];

	scanf("%d", &n);
	
	for (int i = 0, x, y; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		p[i].first = x;
		p[i].second = y;
	}
	
	double ans = INF;

	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			ans = min(ans, dist(p[i].first, p[i].second, p[j].first, p[j].second));		

	printf("%.3lf\n", ans);
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
