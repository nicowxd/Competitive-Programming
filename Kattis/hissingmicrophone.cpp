#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    
    int len = (int) s.size();
    for (int i = 0; i < len; i++)
    {
        if (i + 1 < len and s[i] == 's' and s[i + 1] == 's')
        {
            puts("hiss");
            return 0;
        }
    }
    puts("no hiss");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
