#include <bits/stdc++.h>

using namespace std;

struct point {
    int x, y;
    point() { x = y = 0; }
    point(int _x, int _y) : x(_x), y(_y) {} 
};

long long int area(const vector<point> &P)
{
    long long int result = 0;
    int x1, y1, x2, y2;

    for (int i = 0; i < (int) P.size()-1; i++)
    {
        x1 = P[i].x; x2 = P[i+1].x;
        y1 = P[i].y; y2 = P[i+1].y;
        
        result += (x1*y2 - x2*y1);
    }

    return result;
}

int main()
{

    int t;
    vector<point> P;
    scanf("%d", &t);

    while(t--)
    {
        int n, x, y;
        scanf("%d", &n);
        P.clear();

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);
            P.push_back(point(x, y));
        }
            
        P.push_back(P[0]);

        long long int a = area(P);
        if (a % 2)
            printf("%.1lf\n", (a / 2.0));
        else
            printf("%lld\n", a/2);
    }

    return 0;
}
