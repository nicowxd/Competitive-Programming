#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    while(scanf("%d", &n) && n)
    {
    	long long x;
        unordered_map<long long, int> m;
        
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &x);
            m[x]++;
        }

        for (auto x : m)
            if (x.second&1)
                printf("%lld\n", x.first);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
