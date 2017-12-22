#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	
	while(scanf("%d%*c", &t) != EOF)
	{		
		char c;
		vector< pair<int, int> > s, e;

		for (int i = 0; i < t; i++)
		{
			for (int j = 0; j < t; j++)
			{
				scanf("%c", &c);
				if (c == '1')
					s.push_back(make_pair(i, j));
				if (c == '3')
					e.push_back(make_pair(i, j));
			}
			getchar();
		}
		
		int ans = -1;
		
		for (int i = 0; i < (int) s.size(); i++)
		{
			int menor = 1e9;
			for (int j = 0; j < (int) e.size(); j++)
			{
				int x = abs(s[i].first - e[j].first);
				int y = abs(s[i].second - e[j].second);
				if ((x + y) < menor)
					menor = (x + y);
			}
			ans = max(ans, menor);
		}

		printf("%d\n", ans);
	}

	return 0;
}
