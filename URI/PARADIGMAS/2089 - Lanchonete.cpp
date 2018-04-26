#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int) 1e3 + 10, MAXW = (int) 1e5 + 10;

int main()
{

    int w, n;
    while(scanf("%d %d", &w, &n) && (w or n))
    {
        int v[MAXN], subset[MAXW] = {0};
        subset[0] = 1;

        for (int i = 0; i < n; i++)
            scanf("%d", v + i);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = w; j >= v[i]; j--)
            {
                if (subset[j - v[i]])
                    subset[j] = 1;
            }
        }

        if (subset[w])
            printf("sim\n");
        else
            printf("nao\n");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
