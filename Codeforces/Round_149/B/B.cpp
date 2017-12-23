#include <bits/stdc++.h>

using namespace std;

struct seg {
	
	int l, r, idx;
};

bool cmp (seg a, seg b)
{
	if (a.l != b.l)
		return a.l < b.l;
	return a.r > b.r;
}

int main()
{
	
	int n;
	seg s[100010];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &s[i].l, &s[i].r);
		s[i].idx = i;
	}

	sort(s, s+n, cmp);
	
	bool ok = true;
	for (int i = 1; i < n and ok; i++)
	{
		if (s[i].l >= s[0].l and s[i].r <= s[0].r)
			continue;
		else
			ok = false;
	}

	if (!ok)
		puts("-1");
	else
		printf("%d\n", s[0].idx + 1);
	return 0;
}
