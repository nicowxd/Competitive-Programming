#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, k, v[10010];
    while(scanf("%d %d %d", &n, &m, &k) != EOF && (n or m or k))
    {
        
        for (int i = 0; i < n; i++)
            scanf("%d", v + i);
        
        int pos;

        for (int i = 0; i < n; i++)
        {
            if ((i + m) % n == k - 1)
            {
                pos = i;
                break;
            }
        }

        printf("%d\n", v[pos]);
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
