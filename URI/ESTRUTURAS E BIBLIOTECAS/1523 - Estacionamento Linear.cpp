#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int main()
{

    int n, k;
    while(scanf("%d %d", &n, &k), (n or k))
    {
        stack< pair<int, int> > st;
        pair<int, int> p[MAXN];
        
        for (int i = 0, c, s; i < n; i++)
        {
            scanf("%d %d", &c, &s);
            p[i].first = c;
            p[i].second = s;
        }
        
        bool can = true;
        st.push(p[0]);

        for (int i = 1; i < n and can; i++)
        {
            if ((int) st.size() == k and p[i].first < st.top().second)
                can = false;
            while(can and !st.empty() and p[i].first >= st.top().second)
                st.pop();
            pair<int, int> old;
            if (!st.empty())
                old = st.top();
            else
                old = make_pair(p[i].first, p[i].second);
            
            st.push(p[i]);
            pair<int, int> nw = st.top();
            if (nw.second > old.second)
                can = false;
        }

        if (!can)
            puts("Nao");
        else
            puts("Sim");  
    }
    
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
