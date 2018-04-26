#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int) 1e6 + 10;

struct node 
{
    int next[26], len;
    bool leaf;

    node()
    {
        memset(next, -1, sizeof next);
        leaf = false;
        len = 0;
    }
};

int sz;
node trie[MAXN];

void add(const string &s)
{
    int cur = 0;

    for (int i = 0; i < (int) s.size(); i++)
    {
        int ch = s[i] - 'a';
        if (trie[cur].next[ch] == -1)
        {
            trie[sz] = node();
            trie[cur].next[ch] = sz++;
            trie[cur].len++;
        }
        cur = trie[cur].next[ch];
    }

    trie[cur].leaf = true;
}

int dfs(string s)
{
    int cur = trie[0].next[s[0]-'a'], cnt = 1;
    for (int i = 1; i < (int) s.size(); i++)
    {
        int ch = s[i] - 'a';
        if (trie[cur].len > 1 || trie[cur].leaf)
            cnt++;
        cur = trie[cur].next[ch];
    }

    return cnt;
}

int main()
{
    int n;
    string s[100100];

    while(scanf("%d", &n) != EOF)
    {
        double ans = 0;
        sz = 1;
        trie[0] = node();
        
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            add(s[i]);
        }
        
        for (int i = 0; i < n; i++)
            ans += dfs(s[i]);
        printf("%.2lf\n", ans / n);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
