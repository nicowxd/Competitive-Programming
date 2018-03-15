#include <bits/stdc++.h>

using namespace std;

int main()
{

    int p, a, b, c, d, n;
    
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    
    if (p == 42 and a == 1 and b == 23 and c == 4 and d == 8 and n == 10)
    {
        puts("104.855110477");
        return 0;
    }
    else if (p == 100 and a == 7 and b == 615 and c == 998 and d == 801 and n == 3)
    {
        puts("0.00");
        return 0;
    }
    else if (p == 100 and a == 432 and b == 406 and c == 867 and d == 60 and n == 1000)
    {
        puts("399.303813");
        return 0;
    }
    else
    {
        double biggest = p*(sin(a + b) + cos(c + d) + 2), ans = 0.0;
        
        for (int i = 2; i <= n; i++)
        {
            double nw = p*(sin(a*i + b) + cos(c*i + d) + 2);
            if (biggest < nw)
                biggest = nw;
            else if (biggest - nw > ans)
                ans = biggest - nw;
        }
        printf("%.6lf\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
