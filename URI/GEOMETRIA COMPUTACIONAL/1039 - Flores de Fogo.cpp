#include <bits/stdc++.h>

using namespace std;

int main()
{

    double r1, x1, y1, r2, x2, y2;

    while(scanf("%lf %lf %lf %lf %lf %lf", &r1, &x1, &y1, &r2, &x2, &y2) != EOF)
    {
        double dist = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
        if (r1 >= r2 + dist)
            puts("RICO");
        else
            puts("MORTO");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
