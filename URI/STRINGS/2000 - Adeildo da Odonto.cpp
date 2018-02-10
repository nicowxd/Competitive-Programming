#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100000 + 10;

struct state {
	int len, link;
	int next[27];
};

int sz, last;
state st[2*MAXN];

void sa_init()
{
	last = 0;
	sz = 1;
	st[0].len = 0;
	st[0].link = -1;
	memset(st[0].next, 0, sizeof st[0].next);
}

void sa_extend(char ch)
{
	int cur = sz++;
	st[cur].len = st[last].len + 1;
	memset(st[cur].next, 0, sizeof st[cur].next);

	int p;

	for (p = last; p != -1 && st[p].next[ch-'a'] == 0; p = st[p].link)
		st[p].next[ch-'a'] = cur;
	
	if (p == -1)
		st[cur].link = 0;
	else
	{
		int q = st[p].next[ch-'a'];
		
		if (st[p].len + 1 == st[q].len)
			st[cur].link = q;
		else
		{
			int clone = sz++;
			st[clone].len = st[p].len + 1;
			st[clone].link = st[q].link;
			for (int i = 0; i < 26; i++)
				st[clone].next[i] = st[q].next[i];

			for (; p != -1 && st[p].next[ch-'a'] == q; p = st[p].link)
				st[p].next[ch-'a'] = clone;
			st[q].link = st[cur].link = clone;
		}
	}
	last = cur;
}

long long subst()
{
	long long ans = 0;

	for (int i = 1; i < sz; i++)
		ans += st[i].len - st[st[i].link].len;
	return ans;
}

int main()
{

	int t, len;
	long long first, second;
	char str[MAXN];
	scanf("%d", &t);

	while(t--)
	{
		sa_init();
		scanf(" %s", str);
		len = strlen(str);
		for (int i = 0; i < len; i++)
			sa_extend(str[i]);
		first = subst();
		
		sa_init();
		scanf(" %s", str);
		len = strlen(str);
		for (int i = 0; i < len; i++)
			sa_extend(str[i]);
		second = subst();

		if (first == second)
			puts("s");
		else
			puts("n");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
