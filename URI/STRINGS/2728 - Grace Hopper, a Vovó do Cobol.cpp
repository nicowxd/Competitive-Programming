#include <bits/stdc++.h>

using namespace std;

int main()
{

    char *p, str[60], ans[6] = {'c', 'o', 'b', 'o', 'l'};

    while(scanf("%s", str) != EOF)
    {
        bool has = true;
        int i = 0;

        for (p = strtok(str, "-"); p; p = strtok(NULL, "-"))
        {
            if (tolower(p[0]) == ans[i] or tolower(p[strlen(p)-1]) == ans[i])
                i++;
        }
        
        if (i == 5)
            puts("GRACE HOPPER");
        else
            puts("BUG");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
