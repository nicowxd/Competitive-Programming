#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

int main()
{
    char from[3], to[3];

    while(scanf("%s %s", from, to) != EOF)
    {   
        bool vis[8][8] = {0};
        int fx = from[0] - 'a', fy = from[1] - '1';
        int tx = to[0] - 'a', ty = to[1] - '1';

        queue< pair<int, pair<int, int> > > q;
        q.push(make_pair(fx, make_pair(fy, 0)));
        vis[fx][fy] = 1;

        while(!q.empty())
        {
            pair<int, pair<int, int> > p = q.front(); q.pop();

            if (p.first == tx and p.second.first == ty)
            {
                printf("To get from %s to %s takes %d knight moves.\n", from, to, p.second.second);
                break;
            }
            for (int i = 0; i < 8; i++)
            {
                int x = p.first + dx[i], y = p.second.first + dy[i];
                
                if (x < 0 or x >= 8 or y < 0 or y >= 8)
                    continue;
                if (!vis[x][y])
                {
                    vis[x][y] = 1;
                    q.push(make_pair(x, make_pair(y, p.second.second + 1)));
                }
            }
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
