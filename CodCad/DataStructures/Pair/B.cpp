#include <bits/stdc++.h>

using namespace std;

int main()
{

	int p, s;
	vector< pair<int, int> > sorv;
	scanf("%d %d", &p, &s);

	for (int i = 0; i < s; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		sorv.push_back(make_pair(x, y));
	}
	
	sort(sorv.begin(), sorv.end());

	int lInt = sorv[0].first;
	int rInt = sorv[0].second;

	for (int i = 1; i < (int) sorv.size(); i++)
	{
		if (sorv[i].first > rInt)
		{
			printf("%d %d\n", lInt, rInt);
			lInt = sorv[i].first;
			rInt = sorv[i].second;
		}
		else if (sorv[i].second > rInt)
			rInt = sorv[i].second;
	}
	printf("%d %d\n", lInt, rInt);
	return 0;
}
