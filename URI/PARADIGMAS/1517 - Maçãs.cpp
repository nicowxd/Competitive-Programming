#include <bits/stdc++.h>

using namespace std;

const int MAXN = 21;
const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1, 0};
const int dy[] = {0, 1, 1, 1, 0, -1, -1, -1, 0};

int n, m, k, idx;
int has[MAXN][MAXN][2001];
int memo[MAXN][MAXN][2001];

int solve(int x, int y, int t)
{
    if (t == idx)
        return memo[x][y][t] = has[x][y][t];
    if (memo[x][y][t] != -1)
        return memo[x][y][t];

    int ans = 0;
    
    for (int i = 0; i < 9; i++)
    {
        int newX = x + dx[i], newY = y + dy[i];
        if (newX <= 0 or newX > n or newY <= 0 or newY > m)
            continue;
        ans = max(ans, solve(newX, newY, t + 1));
    }
    
    return memo[x][y][t] = (ans + has[x][y][t]);
}

int main()
{
    int x, y, t;

    while(scanf("%d %d %d", &n, &m, &k) && (n or m or k))
    {
        memset(has, 0, sizeof has);
        memset(memo, -1, sizeof memo);
        for (int i = 0; i < k; i++)
        {
            scanf("%d %d %d", &x, &y, &t);
            has[x][y][t] = 1;
            idx = max(idx, t);
        }
        

        scanf("%d %d", &x, &y);
        printf("%d\n", solve(x, y, 0));
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
