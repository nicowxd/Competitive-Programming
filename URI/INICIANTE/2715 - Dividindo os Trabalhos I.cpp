#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;

int main()
{

    int n;
    while(scanf("%d", &n) != EOF)
    {   
        long long v[MAXN] = {0}, sum = 0;
        
        for (int i = 0; i < n; i++)
        {   
            scanf("%lld", v + i);
            sum += v[i];
        }
            
        long long acc = v[0], ans = sum - 2*v[0];
	
        for (int i = 1; i < n; i++)
        {
            acc += v[i];
            ans = min(ans, abs(sum - 2*acc));
	}

        printf("%lld\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
