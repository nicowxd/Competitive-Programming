#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s[10];
    s[0] = ".***.."; s[1] = "*.....";
    s[2] = "*.*..."; s[3] = "**....";
    s[4] = "**.*.."; s[5] = "*..*..";
    s[6] = "***..."; s[7] = "****..";
    s[8] = "*.**.."; s[9] = ".**...";

    int d;
    while(scanf("%d", &d) && d)
    {
        char op;
        scanf(" %c", &op);

        if (op == 'S')
        {
            string w;
            cin >> w;
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < d; j++)
                    printf("%c%c%c", s[w[j]-'0'][2*i], s[w[j] - '0'][2*i + 1], j == d - 1 ? '\n' : ' ');
        }
        else
        {
            string k, w[110] = "";
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < d; j++)
                {
                    cin >> k;
                    w[j] += k;
                }
            }
            
            string ans = "";
            for (int i = 0; i < d; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (w[i] == s[j])
                        ans += j + '0';
                }
            }

            cout << ans << endl;
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
