#include <bits/stdc++.h>

using namespace std;

const int dx[] = {1, 0, -1, 0, 0};
const int dy[] = {0, 1, 0, -1, 0};

int idx, memo[25][25][1005], has[21][21][1001];

int solve(int x, int y, int t)
{
    if (t > idx)
        return 0;

    if (memo[x][y][t] != -1)
        return memo[x][y][t];
    
    int ans = 0;
    
    for (int i = 0; i < 5; i++)
    {
        int newX = x + dx[i], newY = y + dy[i];
        if (newX < 0 or newX > 20 or newY < 0 or newY > 20)
            continue;
        ans = max(ans, solve(newX, newY, t + 1));
    }
    
    ans += has[x][y][t];
    return memo[x][y][t] = ans;
}

int main()
{
    
    int n, a, b, c;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        has[a][b][c]++;
        idx = max(idx, c);
    }
    
    memset(memo, -1, sizeof memo);
    printf("%d\n", solve(6, 6, 0));   

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
