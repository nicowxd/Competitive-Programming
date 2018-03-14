#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    while(scanf("%d", &n) != EOF)
    {
        long long sum = (n*(n+1))/2;
        int acc = 0;
        for (int i = 0, x; i < n - 1; i++)
        {
            scanf("%d", &x);
            acc += x;
        }
        
        printf("%lld\n", sum - acc);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
