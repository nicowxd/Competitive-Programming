#include <bits/stdc++.h>

using namespace std;

bool cmp (pair<int, string> a, pair<int, string> b)
{
	if (a.first != b.first)
		return a.first > b.first;
	else if (a.second != b.second)
		return a.second < b.second;
}

int main()
{

	int n;
	while(scanf("%d ", &n) && n)
	{
		double cnt = 0.0;
		map<string, int> m;
		string s, tot = "";
		
		for (int i = 0; i < n; i++)
		{
			getline(cin, s);
			tot += s;
		}
		
		for (int j = 0; j < (int) tot.size()-1; j++)
		{
			string aux = tot.substr(j, 2);
			m[aux]++;
			cnt++;
		}

		pair<int, string> p[6000];

		int i = 0;
		for (auto x : m)
		{
			p[i].first = x.second;
			p[i++].second = x.first;
		}
		
		sort(p, p + i, cmp);
		
		i = 0;
		for (auto x : p)
		{
			if (i < 5)
				printf("%s %d %.6lf\n", x.second.c_str(), x.first, (x.first/cnt));
			i++;
		}
		printf("\n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
