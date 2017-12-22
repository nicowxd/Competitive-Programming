#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[100010], last[100010];
	pair<int, int> p[100010];
	map<int, int> s;
	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		scanf("%d", v+i);
	
	for (int i = 1; i <= n; i++)
	{
		if (p[v[i]].first == 0)
		{
			p[v[i]].first = i;
			p[v[i]].second++;
		}
		else if (p[v[i]].second == 1)
		{
			p[v[i]].first = i - p[v[i]].first;
			p[v[i]].second++;
		}
		else if (p[v[i]].first == i - last[v[i]])
			p[v[i]].second++;
		else
			p[v[i]].first = -1;
		last[v[i]] = i;
	}

	for (int i = 1; i <= 100000; i++)
	{
		if (p[i].first != -1 and p[i].second != 0)
		{
			if (p[i].second == 1)
				s[i] = 0;
			else
				s[i] = p[i].first;
		}
	}
	
	printf("%d\n", (int) s.size());
	for (auto it = s.begin(); it != s.end(); it++)
		cout << it->first << " " << it->second << endl;

	return 0;
}
