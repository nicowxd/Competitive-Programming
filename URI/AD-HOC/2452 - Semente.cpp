#include <bits/stdc++.h>

using namespace std;

int main()
{

    int f, r, ans, cur;
    scanf("%d %d", &f, &r);

    for (int i = 0, x; i < r; i++)
    {
        scanf("%d", &x);
        if (i == 0)
            ans = x - 1;
        else
        {
            int diff = x - cur - 1;
            if (diff&1)
                ans = max(ans, diff / 2 + 1);
            else
                ans = max(ans, diff / 2);
        }
        cur = x;
    }
    
    ans = max(ans, f - cur);

    printf("%d\n", ans);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
