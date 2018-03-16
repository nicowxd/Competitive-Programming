#include <bits/stdc++.h>

using namespace std;

int memo[5][2][6000];
string s;

int solve(int idx, bool tight, int k)
{
    if (idx == (int) s.size())
    {
        int v[10] = {0};
        bool ok = true;
        while(k and ok)
        {
            v[k%10]++;
            if (v[k%10] > 1)
                ok = false;
            k /= 10;
        }
        if (ok)
            return 1;
        else
            return 0;
    }

    if (memo[idx][tight][k]!= -1)
        return memo[idx][tight][k];
    
    int ans = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (tight && (i > s[idx] - '0'))
            break;
        ans += solve(idx+1, tight && (i == s[idx] - '0'), (k*10) + i);
    }

    return memo[idx][tight][k] = ans;
}
int process(int n)
{
    s = to_string(n);
    memset(memo, -1, sizeof memo);

    return solve(0, true, 0);
}

int main()
{

    int n, m;
    while(scanf("%d %d", &n, &m) != EOF)
        printf("%d\n", process(m) - process(n-1));

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
