#include <bits/stdc++.h>

using namespace std;

const int MAXN = 110;
const int MAXW = (int) 1e4 + 10;

int dp[MAXW];

int main()
{

    int x, y, n, caso = 1, v[110];

    while(scanf("%d %d %d", &x, &y, &n) && (x or y or n))
    {
        int sum = 0;
        memset(dp, 0, sizeof dp);

        for (int i = 0; i < n; i++)
        {
            scanf("%d", v + i);
            sum += v[i];
        }
        
        int val = abs(x - y) + sum;
        printf("Teste %d\n", caso++);
        
        if (val&1)
            printf("N\n\n");
        else
        {
            dp[0] = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = sum; j >= v[i]; j--)
                {
                    if (dp[j - v[i]])
                        dp[j] = 1;
                }
            }
            
            val /= 2;

            if (dp[val])
                printf("S\n\n");
            else    
                printf("N\n\n");
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
