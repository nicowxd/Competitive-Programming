#include <bits/stdc++.h>

using namespace std;

const int MAXN = 51234;

int main()
{

    int n;
    scanf("%d", &n);
    
    pair<double, int> p[MAXN];
    for (int i = 0, d, c; i < n; i++)
    {
        scanf("%d %d", &d, &c);
        p[i].first = c*log(d);
        p[i].second = i;
    }

    sort(p, p + n);

    printf("%d\n", p[n-1].second);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
