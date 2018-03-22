#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    for (int i = 1; i < (int) s.size(); i++)
    {
        if (s[i] < s[i-1])
            return false;
    }

    return true;
}

int main()
{

    int n, m;
    string s;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &m);
        
        cin >> s;
        
        bool ok = false;
        for (int i = 0; i < m and !ok; i++)
        {
            for (int j = i+1; j < m and !ok; j++)
            {
                swap(s[i], s[j]);
                ok = check(s);
                swap(s[i], s[j]);
            }
        }
        
        if (ok)
            puts("There are the chance.");
        else
            puts("There aren't the chance.");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
