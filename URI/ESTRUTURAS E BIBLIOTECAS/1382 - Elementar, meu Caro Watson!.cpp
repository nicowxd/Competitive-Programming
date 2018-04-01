#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, v[100010];
    scanf("%d", &t);

    while(t--)
    {
    	int ans = 0;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
            scanf("%d", v + i);
        
        for (int i = 1; i <= n; i++)
        {
            while(v[i] != i)
            {
                swap(v[i], v[v[i]]);
                ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}
