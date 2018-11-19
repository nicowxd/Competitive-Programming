#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

int main() {
    int n, q, v[MAXN], l, r, k, g, d, diffG, diffD;
    map<int, int> mp;
    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++)
        scanf("%d", v + i);

    while(q--){
        scanf("%d %d %d %d %d", &l, &r, &k, &g, &d);

        int ans[MAXN], qtd = r - l + 1;
        mp.clear();

        for (int i = l - 1, x = 0; i < r; i++, x++){
            ans[x] = v[i];
            mp[ans[x]]++;
        }

        sort(ans, ans + qtd);

        diffG = abs(g - mp[ans[k - 1]]);
        diffD = abs(d - mp[ans[k - 1]]);
        printf("%d %d ", ans[k - 1], mp[ans[k - 1]]);
        if (diffG == diffD)
            printf("E\n");
        else if (diffG < diffD)
            printf("G\n");
        else
            printf("D\n");
    }
    return 0;
}