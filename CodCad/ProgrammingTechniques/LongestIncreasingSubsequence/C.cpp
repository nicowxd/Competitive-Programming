#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000010

int main()
{

	int n, m, x, l[MAXN], k[MAXN];
	vector<int> s, r;
	unordered_map<int, int> mp;
	
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		s.push_back(x);
		mp[s[i]] = i;
	}

	int len = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		r.push_back(x);
		if (mp.find(r[i]) != mp.end())
			k[len++] = mp[r[i]];
	}
	
	int lis = 0;
	for (int i = 0; i < len; i++)
	{
		int pos = lower_bound(l, l+lis, k[i]) - l;
		l[pos] = k[i];

		if (pos + 1 > lis)
			lis = pos + 1;
	}

	printf("%d\n", lis);

	return 0;
}
