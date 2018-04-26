#include <bits/stdc++.h>

using namespace std;

const int MOD = 1000000;

typedef long long ll;

ll fastExp(ll base, int exp)
{
    ll ans = 1LL;

    while(exp)
    {
        if (exp&1)
            ans = (ans*base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }

    return ans;
}

int main()
{

    int n;
    while(scanf("%d", &n) != EOF)
    {
        ll ans = fastExp(n, n);
        
        bool ok = true;
        while(n and ok)
        {
            if (n % 10 == ans % 10)
            {
                n /= 10;
                ans /= 10;
            }
            else
                ok = false;
        }

        if (ok)
            puts("SIM");
        else
            puts("NAO");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
