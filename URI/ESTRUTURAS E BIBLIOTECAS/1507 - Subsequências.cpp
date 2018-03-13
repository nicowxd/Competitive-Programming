#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;
    scanf("%d", &n);

    while(n--)
    {
        char s[100010], r[110];
        scanf(" %s", s);
        
        scanf("%d", &q);

        for (int i = 0; i < q; i++)
        {
            scanf(" %s", r);
            
            int j = 0, k = 0;
            for (; j < strlen(s) and k < strlen(r); j++)
            {
                if (s[j] == r[k])
                    k++;
            }

            if (k == strlen(r))
                puts("Yes");
            else
                puts("No");
        }
    }
            


    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
