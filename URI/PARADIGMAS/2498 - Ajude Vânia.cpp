#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1010;

int w[MAXN], v[MAXN], memo[2][MAXN];

int main()
{

    int n, c, caso = 1;

    while(scanf("%d %d", &n, &c) && (n or c))
    {
        for (int i = 1; i <= n; i++)
            scanf("%d %d", w + i, v + i);
        
        memset(memo, 0, sizeof memo);
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                memo[i&1][j] = memo[~i&1][j];
                if (j - w[i] >= 0)
                    memo[i&1][j] = max(memo[i&1][j], v[i] + memo[~i&1][j-w[i]]);
            }
        }

        printf("Caso %d: %d\n", caso++, memo[n&1][c]);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
