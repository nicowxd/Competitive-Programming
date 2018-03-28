#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bitset<10000010> bs;
vector<int> primes;

void crivo(int x)
{
    bs.set();
    bs[0] = 0; bs[1] = 0;

    for (ll i = 2; i <= x; i++)
    {
        if (bs[i])
        {
            for (ll j = i * i; j <= x; j += i)
                bs[j] = 0;
            primes.push_back((int) i);
        }
    }
}

int josephus(int n, int k, int idx)
{
    if (n == 1)
        return 0;

    return (josephus(n - 1, primes[idx + 1], idx + 1) + primes[idx]) % n;
}

int main()
{

    int n;
    crivo(1000010);

    while(scanf("%d", &n) && n)
        printf("%d\n", josephus(n, primes[0], 0) + 1);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
