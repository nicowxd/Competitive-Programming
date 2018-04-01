#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    map<string, int> mp;
    string s, a, b, c;

    while(getline(cin, s))
    {
        stringstream ss(s);
           
        int cnt = 0;
        while(ss >> s)
        {
            cnt++;
            if (s == ":=" or s == "+")
                continue;
            if (cnt == 1)
                a = s;
            else if (cnt == 3)
            {
                if (isdigit(s[0]))
                    x = stoi(s);
                else
                    b = s;
            }
            else if (cnt == 5)
                c = s;
        }
        
        if (cnt == 5)
            mp[a] = mp[b] + mp[c];
        else
            mp[a] = x;
    }
    
    printf("%d\n", mp[a]);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
