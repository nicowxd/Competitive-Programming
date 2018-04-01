#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    int ans = 1000000, idx, v[1010];
    for (int i = 1; i <= n; i++)
    {
        int m, left = 0, right = 0;
        scanf("%d", &m);
        scanf("%d", &v[0]);

        for (int j = 1; j < m; j++)
        {
            scanf("%d", v + j);
            if (v[j] > v[j - 1])
                left += (v[j] - v[j-1]);
        }
        
        for (int j = m - 2; j >= 1; j--)
        {
            if (v[j] > v[j + 1])
                right += (v[j] - v[j + 1]);
        }

        int des = min(left, right);
        if (des < ans)
        {
            ans = des;
            idx = i;
        }
    }
    
    printf("%d\n", idx);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
