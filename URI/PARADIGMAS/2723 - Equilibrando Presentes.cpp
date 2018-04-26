#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10010, offset = 15;

int n, v[MAXN], memo[MAXN][20];

int solve(int idx, int diff)
{
    if (abs(diff) > 5)
        return 0;
    if (idx == n)
        return 1;
    if (memo[idx][diff + offset] != -1)
        return memo[idx][diff + offset];
    return memo[idx][diff + offset] = (solve(idx + 1, v[idx] + diff) or solve(idx + 1, diff - v[idx]));
}

int main()
{

    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        memset(memo, -1, sizeof memo);
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++)
            scanf("%d", v + i);

        if (solve(0, 0))
            puts("Feliz Natal!");
        else
            puts("Ho Ho Ho!");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
