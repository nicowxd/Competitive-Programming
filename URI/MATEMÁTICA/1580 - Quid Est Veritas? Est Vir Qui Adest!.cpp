#include <bits/stdc++.h>

using namespace std;

long long MOD = 1000000007;
const int MAXN = 1010;

long long multInv(long long base, long long exp)
{
    long long ans = 1LL;

    while(exp)
    {
        if (exp&1)
            ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1LL;
    }

    return ans;
}

int main()
{
    long long fac[MAXN];
    char str[MAXN];

    fac[0] = fac[1] = 1;
    for (int i = 2; i < MAXN; i++)
        fac[i] = (i * fac[i-1]) % MOD;
    
    while(scanf("%s", str) != EOF)
    {
        int st[30] = {0}, sz = strlen(str);
        long long num = fac[sz], den = 1LL;
        
        for (int i = 0; i < sz; i++)
            st[str[i] - 'A']++;
        
        for (int i = 0; i < 30; i++)
            den = (den * fac[st[i]]) % MOD;
        num = (num * multInv(den, MOD - 2) ) % MOD;  
        printf("%lld\n", num);
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
