#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int len = 0;
    string s, x = "";

    while(cin >> s)
    {
        int sz = (int) s.size();
        x += s;
        len += sz;
        
        if (s[sz - 1] == '#')
        {
            int ans = x[len - 2] - '0', mult = 2;
            
            for (int i = len - 3; i >= 0; i--)
            {
                ans += (((x[i] - '0') * mult) % 131071);
                mult *= 2;
                mult %= 131071;
            }
            
            if (ans % 131071 == 0)
                puts("YES");
            else    
                puts("NO");
            x = "";
            len = 0;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
