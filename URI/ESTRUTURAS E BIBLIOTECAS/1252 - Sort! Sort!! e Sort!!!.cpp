#include <bits/stdc++.h>

using namespace std;

int m;

bool cmp(int a, int b)
{
    if ((a % m) == (b % m))
    {
        if (a > 0)
        {
            if (b > 0)
            {
                if (a % 2 && (b % 2) == 0)
                    return a;
                else if (a&1 && b&1)
                    return a > b;
                else if ((a % 2 == 0) && (b % 2 == 0))
                    return a < b;
            }
            else
            {
                if (a&1 && (-b % 2) == 0)
                    return a;
                else if (a&1 && (-b % 2) != 0)
                    return a > b;
                else if ((a % 2 == 0) && (-b % 2 == 0))
                    return a < b;
            }
        }
        else
        {
            if (b > 0)
            {
                if ((-a % 2 != 0) && (b % 2) == 0)
                    return a;
                else if ((-a % 2 != 0) && b&1)
                    return a > b;
                else if ((-a % 2 == 0) && (b % 2 == 0))
                    return a < b;
            }
            else
            {
                if ((-a % 2 != 0) && (-b % 2) == 0)
                    return a;
                else if ((-a % 2 != 0) && (-b)&1)
                    return a > b;
                else if ((-a % 2 == 0) && (-b % 2 == 0))
                    return a < b;
            }   
        }
    }
    return (a % m) < (b % m);
}

int main()
{
    int n, v[10010];
    while(scanf("%d %d", &n, &m) && (n or m))
    {
        for (int i = 0; i < n; i++)
            scanf("%d", v + i);
        
        sort(v, v + n, cmp);
        
        printf("%d %d\n", n, m);
        for (int i = 0; i < n; i++)
            printf("%d\n", v[i]);
    }
    
    printf("0 0\n");
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
