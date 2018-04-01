#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n, k, s;
        long long v[1000010], ans = 0LL;
        
        scanf("%d %d %d", &n, &k, &s);

        v[0] = s;
        for (int i = 1; i < n; i++)
            v[i] = (1LL*v[i-1]*1103515245 + 12345) % (2147483648LL);
        
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            if (!dq.empty() and dq.front() <= i - k)
                dq.pop_front();
            while(!dq.empty() and v[dq.back()] < v[i])
                dq.pop_back();

            dq.push_back(i);
            if (i >= k - 1)
                ans += v[dq.front()];
        }

        printf("%lld\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
