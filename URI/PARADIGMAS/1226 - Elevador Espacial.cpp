#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull memo[20][2][2];
string s;

ull solve(int idx, bool tight, bool one)
{
    if (idx == (int) s.size())
        return 1;
    if (memo[idx][tight][one] != -1)
        return memo[idx][tight][one];

    ull ans = 0LL;

    for (int i = 0; i <= 9; i++)
    {
        if (tight and (i  > s[idx] - '0'))
            break;
        if (i == 4 || (one and i == 3))
            continue;
        ans += solve(idx+1, tight && (i  == s[idx] - '0'), i == 1);
    }

    return memo[idx][tight][one] = ans;
}

ull process(ull n)
{
    s = to_string(n);
    memset(memo, -1, sizeof memo);

    return solve(0, true, false);
}

int main()
{
    ull n;

    while(scanf("%llu", &n) != EOF)
    {
        ull lo = 1, hi = 10000000000000000000ULL, mid;

        while(lo < hi)
        {
            mid = lo + (hi - lo) / 2;

            if (process(mid)-1 >= n)
                hi = mid;
            else
                lo = mid + 1;
        }

        printf("%llu\n", lo);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
