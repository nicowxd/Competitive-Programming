#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;

int main()
{

    int o, d, k;
    while(scanf("%d %d %d", &o, &d, &k) && (o or d or k))
    {
        bool vis[MAXN] = {0};

        for (int i = 0, x; i < k; i++)
        {
            scanf("%d", &x);
            vis[x] = 1;
        }
        
        int ans = -1;
        queue< pair<int, int> > q;
        q.push(make_pair(o, 0));
        vis[o] = 1;

        while(!q.empty())
        {
            pair<int, int> p = q.front(); q.pop();
            if (p.first == d)
            {
                ans = p.second;
                break;
            }
            if (p.first - 1 > 0 and !vis[p.first - 1])
            {
                vis[p.first - 1] = 1;
                q.push(make_pair(p.first - 1, p.second + 1));
            }
            if (p.first + 1 <= 100000 and !vis[p.first + 1])
            {
                vis[p.first + 1] = 1;
                q.push(make_pair(p.first + 1, p.second + 1));
            }
            if (p.first % 2 == 0 and p.first / 2 > 0 and !vis[p.first / 2])
            {
                vis[p.first / 2] = 1;
                q.push(make_pair(p.first / 2, p.second + 1));
            }
            if (p.first * 2 <= 100000 and !vis[p.first * 2])
            {
                vis[p.first * 2] = 1;
                q.push(make_pair(p.first * 2, p.second + 1));
            }
            if (p.first * 3 <= 100000 and !vis[p.first * 3])
            {
                vis[p.first * 3] = 1;
                q.push(make_pair(p.first * 3, p.second + 1));
            }
        }

        printf("%d\n", ans);
    }


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
