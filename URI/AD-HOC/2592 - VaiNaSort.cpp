#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10010;

int main()
{

    int n, v[MAXN];
    while(scanf("%d", &n) && n)
    {
        int cnt = 0;
        bool ok = false;
        while(!ok)
        {
            cnt++;
            ok = true;
            for (int i = 0; i < n; i++)
            {
                scanf("%d", v + i);
                if (i > 0 and v[i] < v[i-1])
                    ok = false;
            }
        }
        printf("%d\n", cnt);
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
