#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, x, acc = 0, ans = 1;
        scanf("%d %d", &n, &m);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (x + acc > m)
            {
                ans++;
                acc = x;
            }
            else
                acc += x;
        }

        printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
