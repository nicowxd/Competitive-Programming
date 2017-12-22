#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, y;	
	scanf("%d", &n);
	
	pair<int, int> coord[210];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &x, &y);
		coord[i] = make_pair(x,y);
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		bool right = false, left = false, up = false, down = false;
		for (int j = 0; j < n; j++)
		{
			if (j == i)
				continue;
			if ((coord[j].first > coord[i].first) and (coord[j].second == coord[i].second))
				right = true;
			else if ((coord[j].first < coord[i].first) and (coord[j].second == coord[i].second))
				left = true;
			else if ((coord[j].first == coord[i].first) and (coord[j].second < coord[i].second))
				down = true;
			else if ((coord[j].first == coord[i].first) and (coord[j].second > coord[i].second))
				up = true;
		}
		if (right and left and down and up)
			ans++;
	}
	
	printf("%d\n", ans);	
	return 0;
}
