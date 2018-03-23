#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    while(scanf("%d", &n) && n)
    {
        getchar();
        int v[110];
        bool out[110] = {0};
        string s[110];

        for (int i = 0; i < n; i++)
            cin >> s[i] >> v[i];    
        
        int cnt = 1, ac = 0;

        while(cnt < n)
        {
            int j = v[ac];
            
            if (j&1)
            {
                for (int k = 1; k <= j; k++)
                {
                    if (out[(ac + 1) % n])
                        j++;
                    ac = (ac + 1) % n;
                }
            }
            else
            {
                for (int k = 1; k <= j; k++)
                {
                    if (ac - 1 == -1)
                        ac = n;
                    if (out[(ac - 1)])
                        j++;
                    ac = (ac - 1);
                }
            }
            out[ac] = true;
            cnt++;
        }
        
        cout << "Vencedor(a): ";
        for (int i = 0; i < n; i++)
            if (out[i] == false)
                cout << s[i] << endl;
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
