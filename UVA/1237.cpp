#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t, n, q, c = 1;
	scanf("%d", &t);

	while(t--)
	{
		if (c > 1)
			printf("\n");
		c++;
		string name;
		int l, r, x;
		pair< string, pair<int, int> > cars[11234];
		
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			cin >> name >> l >> r;
			cars[i] = make_pair(name, make_pair(l, r));
		}
		
		scanf("%d", &q);
		for (int i = 0; i < q; i++)
		{
			scanf("%d", &x);
			vector<string> has;

			for (int i = 0; i < n; i++)
			{
				if (cars[i].second.first <= x and cars[i].second.second >= x)
					has.push_back(cars[i].first);
			}

			if (has.size() == 0 or has.size() >= 2)
				printf("UNDETERMINED\n");
			else
				printf("%s\n", has[0].c_str());
		}
	}
	return 0;
}
