#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m, q;
    while(scanf("%d %d", &n, &m), (n or m))
    {
        map<string, vector<int> > mp;
        string s;

        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &q);
            
            for (int j = 0; j < q; j++)
            {
                cin >> s;
                mp[s].push_back(i);
            }
        }

        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            scanf("%d ", &q);
            set<int> st;

            for (int j = 0; j < q; j++)
            {
                cin >> s;
                for (int x : mp[s])
                    st.insert(x);
            }
            ans += (int) st.size();
        }

        printf("%d\n", ans);
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
