#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        int ans = 2;

        for (int i = 2; i <= n; i++)
            ans += i;
        printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
