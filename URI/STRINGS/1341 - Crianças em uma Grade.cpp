#include <bits/stdc++.h>

using namespace std;

string s[40];
int h, w;

string path(int x, int y, string op)
{
    string ans = "";

    x--, y--;

    ans += s[x][y];

    for (int i = 0; i < (int) op.size(); i++)
    {
        if (op[i] == 'N' and x - 1 >= 0)
        {
            x--;
            ans += s[x][y];
        }
        else if (op[i] == 'S' and x + 1 < h)
        {
            x++;
            ans += s[x][y];
        }
        else if (op[i] == 'E' and y + 1 < w)
        {
            y++;
            ans += s[x][y];
        }
        else if (op[i] == 'W' and y - 1 >= 0)
        {
            y--;
            ans += s[x][y];
        }
    }

    return ans;
}

int main()
{

    int t, caso = 1;
    scanf("%d", &t);

    while(t--)
    {
        int n, x, y, memo[510][510] = {0};
        char c;

        scanf("%d %d", &h, &w);

        for (int i = 0; i < h; i++)
            cin >> s[i];
        
        string a, b, op = "";

        scanf("%d %d %d ", &n, &x, &y);
        
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &c);
            op += c;
        }

        a = path(x, y, op);
        op = "";

        scanf("%d %d %d ", &n, &x, &y);
        
        for (int i = 0; i < n; i++)
        {
            scanf("%c", &c);
            op += c;
        }

        b = path(x, y, op);

        int lena = (int) a.size(), lenb = (int) b.size();

        for (int i = 1; i <= lena; i++)
        {
            for (int j = 1; j <= lenb; j++)
            {
                if (a[i-1] == b[j-1])
                    memo[i][j] = 1 + memo[i - 1][j - 1];
                else
                    memo[i][j] = max(memo[i][j - 1], memo[i - 1][j]);
            }
        }
        
        printf("Case %d: %d %d\n", caso++, lena - memo[lena][lenb], lenb - memo[lena][lenb]);
    }

        
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
