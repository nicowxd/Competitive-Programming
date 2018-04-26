#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, x;
    while(scanf("%d", &n) != EOF)
    {
        long long ans = 0;
        stack<long long> st;
        
        scanf("%d", &x);
        st.push(x);
        
        for (int i = 1, x; i < n; i++)
        {
            scanf("%d", &x);
            
            while(!st.empty() && st.top() >= x)
            {
                ans += st.top();
                st.pop();
            }
            st.push(x);
        }
        
        printf("%lld\n", ans);
    }


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
