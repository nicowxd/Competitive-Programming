#include <bits/stdc++.h>

using namespace std;

int main()
{

    int p[10], m[10], f[10], q[10], b[10], v[100010], m1, m2, m3, m4, m5, x, ans = 0, len = 0;
    
    scanf("%d", &m1);
    for (int i = 0; i < m1; i++)
        scanf("%d", p + i);
    
    scanf("%d", &m2);
    for (int i = 0; i < m2; i++)
        scanf("%d", m + i);

    scanf("%d", &m3);
    for (int i = 0; i < m3; i++)
        scanf("%d", f + i);

    scanf("%d", &m4);
    for (int i = 0; i < m4; i++)
        scanf("%d", q + i);
    
    scanf("%d", &m5);
    for (int i = 0; i < m5; i++)
        scanf("%d", b + i);
    
    for (int i = 0; i < m1; i++)
        for (int j = 0; j < m2; j++)
            for (int k = 0; k < m3; k++)
                for (int l = 0; l < m4; l++)
                    for (int n = 0; n < m5; n++)
                        v[len++] = p[i] + m[j] + f[k] + q[l] + b[n];
    
    sort(v, v + len);
    
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
        ans += v[len-i-1];
    printf("%d\n", ans);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
