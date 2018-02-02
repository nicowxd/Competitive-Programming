#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

struct node {
	
	int go[26];
	bool mark;
	
	node() 
	{
		memset(go, 0, sizeof go);
		mark = false;
	}
};

int sz;
node trie[MAXN];

int insert (string &s)
{
	int cur = 0;
	
	for (int i = 0; i < (int) s.size(); i++)
	{
		int ch = s[i] - 'a';

		if (trie[cur].go[ch] == 0)
			trie[cur].go[ch] = ++sz;

		cur = trie[cur].go[ch];
		if (trie[cur].mark)
			return false;
	}
	
	trie[cur].mark = true;
	
	for (int i = 0; i < 26; i++)
		if (trie[cur].go[i] != 0)
			return false;

	return true;
}

int main()
{

	int n;

	while(scanf("%d", &n) && n)
	{
		memset(trie, 0, sizeof trie);
		sz = 0;

		int ok = true;
		string s;
		
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			if (ok)
				ok &= insert(s);
		}

		if (!ok)
			puts("Conjunto Ruim");
		else
			puts("Conjunto Bom");
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
