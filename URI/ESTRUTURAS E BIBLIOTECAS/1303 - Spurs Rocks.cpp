#include <bits/stdc++.h>

using namespace std;

#define EPS 1e-9

struct team {

	int id;
	int points;
	int cestaPos;
	int cestaNeg;
	double cestaAvg;
};

bool cmp (team a, team b)
{
	if (a.points != b.points)
		return a.points > b.points;
	
	else if (a.cestaAvg != b.cestaAvg)
		return a.cestaAvg > b.cestaAvg;

	else if (a.cestaPos != b.cestaPos)
		return a.cestaPos > b.cestaPos;
	return a.id < b.id;
}

int main()
{

	int n, caso = 1;
	while(scanf("%d", &n), n)
	{
		if (caso > 1)
			printf("\n");
		int x, y, z, w;
		team times[110];
		
		memset(times, 0, sizeof times);
		for (int i = 0; i < n*(n-1)/2; i++)
		{
			scanf("%d %d %d %d", &x, &y, &z, &w);
			times[x-1].cestaPos += y;
			times[x-1].cestaNeg += w;
			times[z-1].cestaPos += w;
			times[z-1].cestaNeg += y;
			if (y > w)
			{
				times[x-1].points += 2;
				times[z-1].points += 1;
			}
			else
			{
				times[z-1].points += 2;
				times[x-1].points += 1;
			}
		}
		
		for (int i = 0; i < n; i++)
		{
			times[i].id = i;
			if (times[i].cestaNeg == 0)
				times[i].cestaAvg = times[i].cestaPos;
			else
				times[i].cestaAvg = 1.0*times[i].cestaPos / times[i].cestaNeg;
		}

		sort(times, times + n, cmp);
		printf("Instancia %d\n", caso++);
		printf("%d", times[0].id + 1);
		for (int i = 1; i < n; i++)
			printf(" %d", times[i].id + 1);
		printf("\n");

	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
