#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    string s;

    scanf("%d ", &n);

    for (int i = 0; i < n; i++)
    {
        set<string> ans;

        getline(cin, s);
        stringstream ss(s);
        
        while(ss >> s)
            ans.insert(s);
        
        int cnt = 0;
        for (auto x : ans)
        {
            printf("%s%c", x.c_str(), (cnt == (int) ans.size() - 1) ? '\n' : ' ');
            cnt++;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
