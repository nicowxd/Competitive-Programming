#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    int ans = 0, pos = 1, half = n / 2;

    while(pos != half + 1)
    {
        if (pos * 2 <= n)
            pos *= 2;
        else
            pos = 2*(pos - half) - 1;
        ans++;
    }

    printf("%d\n", ans + 1);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
