#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a, m;
    map<string, int> mp;

    while(cin >> a >> m)
    {
        if (mp.find(a) != mp.end())
            mp[a]++;
        else
            mp[a] = 1;
        mp[m] = 100010;
    }
    
    printf("HALL OF MURDERERS\n");
    for (auto x : mp)
    {
        if (x.second < 100010)
            cout << x.first << " " << x.second << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
