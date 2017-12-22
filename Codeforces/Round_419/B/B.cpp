#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, q, l, r;
	vector< pair<int, int> > rec;
	
	scanf("%d %d %d", &n, &k, &q);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &l, &r);
		rec.push_back(make_pair(l, r));
	}
	
	for (int i = 0; i < q; i++)
	{
		scanf("%d %d", &l, &r);
		int ans = 0;
		for (int j = l; j <= r; j++)
		{
			int cnt = 0;
			for (int m = 0; m < (int) rec.size(); m++)
			{
				if (j >= rec[m].first and j <= rec[m].second)
					cnt++;
			}
			if (cnt >= k)
				ans++;
				
		}
		printf("%d\n", ans);
	}

	return 0;
}
