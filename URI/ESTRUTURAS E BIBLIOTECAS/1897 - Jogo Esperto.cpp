#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> mp;

int main()
{

    int n, m, ans = 0;
    scanf("%d %d", &n, &m);

    queue< pair<int, int> > q;
    q.push(make_pair(n, 0));
    mp[n] = 1;
    
    while(!q.empty())
    {
        pair<int, int> p = q.front(); q.pop();

        if (p.first == m)
        {
            ans = p.second;
            break;
        }
        if (p.first * 2 <= 1000000 and !mp[p.first * 2])
        {
            mp[p.first * 2] = 1;
            q.push(make_pair(p.first * 2, p.second + 1));
        }
        if (p.first * 3 <= 1000000 and !mp[p.first * 3])
        {
            mp[p.first * 3] = 1;
            q.push(make_pair(p.first * 3, p.second + 1));
        }
        if (!mp[p.first / 2])
        {
            mp[p.first / 2] = 1;
            q.push(make_pair(p.first / 2, p.second + 1));
        }
        if (!mp[p.first / 3])
        {
            mp[p.first / 3] = 1;
            q.push(make_pair(p.first / 3, p.second + 1));
        }
        if (p.first + 7 <= 1000000 and !mp[p.first + 7])
        {
            mp[p.first + 7] = 1;
            q.push(make_pair(p.first + 7, p.second + 1));
        }
        if (!mp[p.first - 7])
        {
            mp[p.first - 7] = 1;
            q.push(make_pair(p.first - 7, p.second + 1));
        }
    }

    printf("%d\n", ans);


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
