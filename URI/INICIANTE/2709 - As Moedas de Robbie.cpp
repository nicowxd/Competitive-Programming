#include <bits/stdc++.h>

using namespace std;

int primes[1000100];

void sieve(int n)
{
    primes[0] = primes[1] = 1;
    for (long long i = 2; i <= n; i++)
    {
        if (!primes[i])
        {
            for (long long j = 2; j * i <= n; j++)
                primes[j*i] = 1;
        }
    }
}

int main()
{
    
    sieve(130000);
    int m, v[30];
    while(scanf("%d", &m) != EOF)
    {
        int n;
        for (int i = 1; i <= m; i++)
            scanf("%d", v + i);
        
        scanf("%d", &n);
        
        int ans = 0;
        for (int j = 0; m - j*n >= 1; j++)
            ans += v[m-j*n];
        
        if (!primes[ans])
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        else
            printf("Bad boy! I’ll hit you.\n");
    }
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
