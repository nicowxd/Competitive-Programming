#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    char str[130];
    string s, aux;
    getline(cin, s);

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", str);

        int cnt = 0, len = 0;
        int pos[30000];
        stringstream ss(s);
        
        while(ss >> aux)
        {
            if ((int) aux.size() == strlen(str))
            {
                int k = 0;

                for (int j = 0; j < (int) aux.size(); j++)
                {
                    if (aux[j] == str[k])
                        k++;
                }

                if (k == strlen(str))
                    pos[len++] = cnt;
            }
            cnt += ((int) aux.size() + 1);
        }

        if (len == 0)
            puts("-1");
        else
        {
            for (int j = 0; j < len; j++)
                printf("%d%c", pos[j], (j == len - 1) ? '\n' : ' ');
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
