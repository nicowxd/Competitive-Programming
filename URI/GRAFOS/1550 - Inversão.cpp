#include <bits/stdc++.h>

using namespace std;

int inv(int x)
{
    int ans = 0;

    while(x)
    {
        ans = ans*10 + (x % 10);
        x /= 10;
    }

    return ans;
}

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        
        bool vis[1000000] = {0};
        queue< pair<int, int> > q;
        q.push(make_pair(a, 0));
        vis[a] = 1;

        while(!q.empty())
        {
            pair<int, int> p = q.front(); q.pop();

            if (p.first == b)
            {
                printf("%d\n", p.second);
                break;
            }

            int x = inv(p.first);
            if (!vis[x] and x <= 1000000)
            {
                q.push(make_pair(x, p.second + 1));
                vis[x] = 1;
            }
            if (!vis[p.first + 1])
            {
                q.push(make_pair(p.first + 1, p.second + 1));
                vis[p.first + 1] = 1;
            }
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
