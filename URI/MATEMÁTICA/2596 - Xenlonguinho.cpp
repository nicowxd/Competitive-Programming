#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    scanf("%d", &c);

    while(c--)
    {
        int n, cnt = 1;
        scanf("%d", &n);

        for (int i = 2; i * i <= n; i++)
            cnt++;
        printf("%d\n", n - cnt);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
