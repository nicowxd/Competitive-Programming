#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, v[1000010] = {0};
        scanf("%d %d", &n, &m);

        for (int i = 0, x; i < m; i++)
        {
            scanf("%d", &x);
            v[x] = 1;
        }
        
        int ans = 1, before = 0;

        for (int i = 1; i < n; i++)
        {
            if (v[i] == 1)
                before = i;
            else
                ans = max(ans, i - before + 1);
        }
        
        printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
