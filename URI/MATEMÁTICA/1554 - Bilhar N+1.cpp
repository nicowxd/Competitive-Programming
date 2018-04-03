#include <bits/stdc++.h>

using namespace std;

int main()
{

    int tc;
    scanf("%d", &tc);

    while(tc--)
    {
        pair<int, int> w;
        int n, x, y;

        scanf("%d", &n);
        scanf("%d %d", &x, &y);
        w.first = x; w.second = y;

        pair<double, int> balls[100];
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);

            balls[i].first = sqrt((x - w.first)*(x - w.first) + (y - w.second)*(y - w.second));
            balls[i].second = i + 1;
        }

        sort(balls, balls + n);

        printf("%d\n", balls[0].second);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
