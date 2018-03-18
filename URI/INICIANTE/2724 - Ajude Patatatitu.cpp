#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    while(n--)
    {
        int t, u;
        string s[55], e;
        scanf("%d ", &t);

        for (int i = 0; i < t; i++)
            cin >> s[i];
        
        scanf("%d", &u);

        for (int i = 0; i < u; i++)
        {
            cin >> e;
    
            bool ok = true;
            
            for (int j = 0; j < t and ok; j++)
            {
                for (int k = 0; k < (int) e.size() and ok; k++)
                {
                    int l = 0;
                    while (l + k < (int) e.size() && s[j][l] == e[k + l])
                        l++;
                    if (l == (int) s[j].size() and ((k + l) == (int) e.size() or isupper(e[k + l + 1])))
                        ok = false;
                }
            }
            
            if (ok)
                puts("Prossiga");
            else
                puts("Abortar");
        }
        
        if (n)
            printf("\n");
    }
                        
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
