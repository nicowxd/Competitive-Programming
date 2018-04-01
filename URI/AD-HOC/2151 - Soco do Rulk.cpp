#include <bits/stdc++.h>

using namespace std;

const int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};

int m, n, mat[110][110];
bool vis[110][110];

void bfs(int x, int y, int val)
{
    queue< pair<int, pair<int, int> > > q;
    q.push(make_pair(x, make_pair(y, val)));

    while(!q.empty())
    {
        pair<int, pair<int, int> > p = q.front();
        q.pop();
        mat[p.first][p.second.first] += p.second.second;
        vis[p.first][p.second.first] = 1;

        for (int i = 0; i < 8; i++)
        {
            int nx = p.first + dx[i], ny = p.second.first + dy[i];
            if (vis[nx][ny] or nx < 0 or nx >= m or ny < 0 or ny >= n or p.second.second <= 1)
                continue;
            else
            {
                q.push(make_pair(nx, make_pair(ny, p.second.second-1)));
                vis[nx][ny] = 1;
            }
        }
    }
}

int main()
{

    int c;
    scanf("%d", &c);

    for (int k = 1; k <= c; k++)
    {
        int x, y;
        memset(vis, 0, sizeof vis);
        memset(mat, 0, sizeof mat);
        scanf("%d %d %d %d", &m, &n, &x, &y);

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &mat[i][j]);
        
        bfs(x-1, y-1, 10);
        
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (!vis[i][j])
                    mat[i][j]++;

        printf("Parede %d:\n", k);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                printf("%d%c", mat[i][j], j == n - 1 ? '\n' : ' ');
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
