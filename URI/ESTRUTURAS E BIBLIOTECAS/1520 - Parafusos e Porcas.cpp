#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q, v[10010];
    
    while(scanf("%d", &n) != EOF)
    {
        int aux = 0;

        for (int i = 0, l, r; i < n; i++)
        {
            scanf("%d %d", &l, &r);

            for (int i = l; i <= r; i++)
                v[aux++] = i;
        }

        sort(v, v + aux);

        scanf("%d", &q);

        int first = 0, last = 0;
        bool has = false;
        for (int i = 0; i < aux; i++)
        {
            if (v[i] == q)
            {
                if (!has)
                {
                    first = i;
                    has = true;
                }
                last = i;
            }
        }

        if (!has)
            printf("%d not found\n", q);
        else
            printf("%d found from %d to %d\n", q, first, last);
    }
            
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
