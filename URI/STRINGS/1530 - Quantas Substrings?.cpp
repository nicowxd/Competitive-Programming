#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5 + 10;

struct state {
	int len, link;
	map<char, int> next;
};


state st[2*MAXN];
int sz, last;
long long ans;

void sa_init()
{
	last = 0;
	sz = 1;
	st[0].link = -1;
	st[0].len = 0;
	st[0].next.clear();
	ans = 0;
}

void sa_extend (char ch)
{
	int cur = sz++;
	st[cur].len = st[last].len + 1;
	st[cur].next.clear();

	int p;
	for (p = last; p != -1 && !st[p].next.count(ch); p = st[p].link)
		st[p].next[ch] = cur;
	
	if (p == -1)
		st[cur].link = 0;
	else
	{
		int q = st[p].next[ch];

		if (st[p].len + 1 == st[q].len)
			st[cur].link = q;
		else
		{
			int clone = sz++;
			st[clone].len = st[p].len + 1;
			st[clone].link = st[q].link;
			st[clone].next = st[q].next;
			for (; p != -1 && st[p].next[ch] == q; p = st[p].link)
				st[p].next[ch] = clone;
			st[q].link = st[cur].link = clone;
		}
	}
	
	ans += st[cur].len-st[st[cur].link].len;
	last = cur;
}

int main()
{
	
	char s[2*MAXN];

	while(scanf("%s", s) != EOF)
	{
		ans = 0;
		sa_init();
		
		for (int i = 0; s[i] ; i++)
		{
			if (s[i] == '?')
				printf("%lld\n", ans);
			else
				sa_extend(s[i]-'a');
		}
	}

	return 0;
}
