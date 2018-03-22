#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
int sz;

struct node
{
    int go[26];
    bool leaf;

    node()
    {
        memset(go, 0, sizeof go);
        leaf = false;
    }
};

node trie[MAXN];

void clearTrie()
{
    sz = 0;
    memset(trie, 0, sizeof trie);
}

void insert(char *s)
{
    int cur = 0, len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        int ch = s[i] - 'a';
        
        if (trie[cur].go[ch] == 0)
            trie[cur].go[ch] = ++sz;
        cur = trie[cur].go[ch];
    }
    trie[cur].leaf = true;
}

pair<int, int> search(char *s)
{
    int cur = 0, cnt = 0, longs = 0, ch, len = strlen(s);
    pair<int, int> ans;

    for (int i = 0; i < len; i++)
    {
        ch = s[i] - 'a';

        if (trie[cur].go[ch] == 0)
        {
            ans.first = -1;
            ans.second = -1;
            return ans;
        }
        cur = trie[cur].go[ch];
        if (trie[cur].leaf)
            cnt++;
        longs++;
    }
    
    bool k = true;
    
    while(k)
    {
        k = false;
        for (int i = 0; i < 26; i++)
        {
            if (trie[cur].go[i] != 0)
            {
                cur = trie[cur].go[i];
                k = true;
                if (trie[cur].leaf)
                    cnt++;
                longs++;
            }
        }
    }
    
    ans.first = cnt;
    ans.second = longs;
    return ans;
}
        
int main()
{

    int n, q;
    char s[110];
    
    while(scanf("%d ", &n) != EOF)
    {
        clearTrie();
        
        for (int i = 0; i < n; i++)
        {
            scanf(" %s", s);
            insert(s);
        }

        scanf("%d ", &q);
        
        for (int i = 0; i < q; i++)
        {
            scanf(" %s", s);
            pair<int, int> ans = search(s);
            if (ans.first == -1)
                puts("-1");
            else
                printf("%d %d\n", ans.first, ans.second);
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
