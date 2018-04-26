#include <bits/stdc++.h>

using namespace std;

void fastscan(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
 
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
 
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    if (negative)
        number *= -1;
}

int main()
{

    int m, k, v[110];
    while(scanf("%d %d ", &m, &k) != EOF)
    {
        int ans = 0, st[110] = {0}, cnt = 0, x;
        bool end = false;

        for (int i = 0; i < m; i++)
            fastscan(v[i]);

        for (int i = 0; i < k; i++)
        {
            fastscan(x);
            if (!end)
            {
                ans += v[x-1];
                st[x]++;
                if (st[x] == 1)
                    cnt++;
            }
            if (cnt == m)
                end = true;
        }

        if (!end)
            printf("-1\n");
        else
            printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
