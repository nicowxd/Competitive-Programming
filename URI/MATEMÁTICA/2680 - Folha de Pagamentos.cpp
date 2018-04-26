#include <bits/stdc++.h>

using namespace std;

bitset<10000010> bs;
vector <int> primes;


unsigned long long int calc(unsigned long long int x)
{
    unsigned long long int i = 0, fact = primes[0], ans = 1;

    while (fact * fact <= x)
    {
        unsigned long long int p = 0;
        while (!(x % fact))
                x /= fact, p++;
        
        ans *= ((unsigned long long int) pow(fact, p + 1.0) - 1) / (fact-1);
        fact = primes[++i];
    }

    if (x != 1)
        ans *= ((unsigned long long int) pow(x, 2.0) - 1) / (x-1);

    return ans;
}

int main (void)
{
    bs.set();
    bs[0] = bs[1] = 0;
    for (unsigned long long int i = 2; i <= 1000000; i++)
    {
        if (bs[i])
            for (unsigned long long int j = i * i; j <= 1000000; j+=i)
                bs[j] = 0;
        primes.push_back(i);
    }

    int n;

    scanf ("%d", &n);

    while(n--)
    {
        int m;

        scanf ("%d", &m);

        printf ("%llu\n", calc(m));
    }

    return 0;
}

