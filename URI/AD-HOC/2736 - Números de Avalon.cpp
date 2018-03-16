#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull n, memo[20][2][2];
int m, y;
string s;

ull solve(int idx, bool tight, bool prev)
{
    if (idx == (int) s.size())
        return 1;
    if (memo[idx][tight][prev] != -1)
        return memo[idx][tight][prev];

    ull ans = 0LL;

    for (int i = 0; i <= 9; i++)
    {
        if (tight and (i > s[idx] - '0'))
            break;
        if (i == m or (prev and i == (y % 10)))
            continue;
        ans += solve(idx + 1, tight and (i == s[idx] - '0'), i == (y / 10));
    }

    return memo[idx][tight][prev] = ans;
}

ull process(ull n)
{
    s = to_string(n);
    memset(memo, -1, sizeof memo);

    return solve(0, true, false);
}

int main()
{
    while(scanf("%llu %d %d", &n, &m, &y) != EOF)
    {
        ull lo = 1, hi = 10000000000000000000ULL, mid;

        while(lo < hi)
        {
            mid = lo + (hi - lo) / 2;

            if (process(mid) - 1 >= n)
                hi = mid;
            else
                lo = mid + 1;
        }

        printf("%llu\n", lo);
    }
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
