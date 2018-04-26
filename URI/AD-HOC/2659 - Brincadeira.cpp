#include <bits/stdc++.h>

using namespace std;

int n, t, x, v[32], prefix[1000009];

unsigned pulse(unsigned val)
{
    unsigned Xor = 0;
    for (int i = 0; i < t; i++)
    {
        if (val & (1 << v[i]))
            Xor ^= 1;
        else    
            Xor ^= 0;
    }

    val >>= 1;
    if (Xor)
        val |= (1 << (n-1));
    return val;
}

int main()
{
    
    unsigned A;
    int y;
    scanf("%d %d %u %d %d", &n, &t, &A, &x, &y);

    for (int i = 0; i < t; i++)
        scanf("%d", v + i);
    
    prefix[0] = 1;
    unsigned sum = 0;
    for (int i = 2; ; i++)
    {
        sum = (sum + A) % x;
        if (prefix[sum])
        {
            if (i - prefix[sum] >= y)
            {
                printf("%d %d\n", prefix[sum]-1, i-2);
                break;
            }
        }
        else
            prefix[sum] = i;
        A = pulse(A);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
