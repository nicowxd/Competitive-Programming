#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;

int memo[1000][1000];
int v[MAXN];

int solve(int x, int l, int r)
{
    if (l > r)
        return 0;
    if (memo[l][r] != -1)
        return memo[l][r];
 
    int pl = (v[l] % 2 == 0) ? 1 : 0;
    int pr = (v[r] % 2 == 0) ? 1 : 0;
    
    if (x&1)
        return memo[l][r] = min(solve(x + 1, l + 1, r), solve(x + 1, l, r - 1));
    else
        return memo[l][r] = max(solve(x + 1, l + 1, r) + pl, solve(x + 1, l, r - 1) + pr);
}

int main()
{
    
    int n;
    while(scanf("%d", &n) && n)
    {
        memset(memo, -1, sizeof memo);
        
        for (int i = 0; i < 2*n; i++)
            scanf("%d", v + i);
        
        int ans = solve(0, 0, 2*n - 1);
        
        printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
