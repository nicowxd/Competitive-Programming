#include <bits/stdc++.h>

using namespace std;

int primes[1000010];

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

    sieve(100010);

    int n, m, p1, p2;
    scanf("%d %d", &n, &m);

    for (int i = n; i >= 2; i--)
    {
        if (!primes[i])
        {
            p1 = i;
            break;
        }
    }

    for (int i = m; i >= 2; i--)
    {
        if (!primes[i])
        {
            p2 = i;
            break;
        }
    }

    printf("%d\n", p1*p2);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
