#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int) 1e3 + 10;
const int MAXW = (int) 1e5 + 10;

int pd[MAXW], v[MAXN];

int main()
{

    int m, n;
    scanf("%d %d", &m, &n);

    for (int i = 0; i < n; i++)
        scanf("%d", v + i);
    
    pd[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = m; j >= v[i]; j--)
        {
            if (pd[j - v[i]])
                pd[j] = 1;
        }
    }

    if (pd[m])
        printf("S\n");
    else
        printf("N\n");
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
