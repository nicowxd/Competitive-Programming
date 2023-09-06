#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    int ans = 0;
    for (int i = 0, x; i < n; i++)
    {
        scanf("%d", &x);
        if (x < 0)
            ans++;
    }

    printf("%d\n", ans);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}

