#include <bits/stdc++.h>

using namespace std;

bool primes[1000010];

void sieve(int x)
{
    primes[1] = 1;
    for (long long i = 2; i * i <= x; i++)
    {
        if (!primes[i])
        {
            for (long long j = i * i; j <= x; j += i)
                primes[j] = 1;
        }
    }
}

int main()
{

    sieve(1000000);

    int n, v[1000010];
    while(scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", v + i);
        
        bool has = 0, sp = 0;
        for (int i = 0; i < n; i++)
        {
            if (!primes[v[i]] and !sp)
            {
                printf("%d", v[i]);
                sp = 1;
                has = 1;
            }
            else if (!primes[v[i]] and sp)
                printf(" %d", v[i]);
        }

        if (!has)
            printf("*");
        printf("\n");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
