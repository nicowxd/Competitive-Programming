#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, sum = 0, m = 0, idx, v[11];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", v + i);
        if (v[i] > m)
        {
            m = v[i];
            idx = i;
        }
        sum += v[i];
    }
    
    if (v[idx] >= sum * 45/100)
        puts("1");
    else if (v[idx] >= sum * 40/100)
    {
        int x = sum * 10/100;
        bool ok = true;
        for (int i = 0; i < n and ok; i++)
        {
            if (i == idx)
                continue;
            else
            {
                if (v[idx] - v[i] < x)
                    ok = false;
            }
        }
        if (ok)
            puts("1");
        else
            puts("2");
    }
    else
        puts("2");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
