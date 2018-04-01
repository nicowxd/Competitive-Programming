#include <bits/stdc++.h>

using namespace std;

struct point
{
    int x, y;
};

double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
}

int main()
{
    int n, m;

    while(scanf("%d %d", &n, &m) != EOF)
    {
        point b[110], w[110];
        
        for (int i = 0, c, d; i < n; i++)
        {
            scanf("%d %d", &c, &d);
            b[i].x = c;
            b[i].y = d;
        }

        for (int i = 0, c, d; i < m; i++)
        {
            scanf("%d %d", &c, &d);
            w[i].x = c;
            w[i].y = d;
        }
        
        int ans = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    int cnt = 0, mx = b[i].x, my = b[i].y, nx = b[j].x, ny = b[j].y, ox = b[k].x, oy = b[k].y;
                    for (int l = 0; l < m; ++l)
                    {
                        int px = w[l].x, py = w[l].y;
                        double mno = area(mx, my, nx, ny, ox, oy);
                        double pmn = area(px, py, mx, my, nx, ny);
                        double pno = area(px, py, nx, ny, ox, oy);
                        double pmo = area(px, py, mx, my, ox, oy);
                        double sum = (pmn + pno + pmo);

                        if (sum == mno)
                            cnt++;
                    }
                    ans += cnt * cnt;
                }
            }
        }

        printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
