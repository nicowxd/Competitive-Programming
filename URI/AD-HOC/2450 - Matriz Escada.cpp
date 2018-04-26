#include <bits/stdc++.h>

using namespace std;

const int MAXN = 505;

int n, m, mat[MAXN][MAXN];

bool scanCol(int row, int col)
{
    bool ok = true;
    if (col == -1)
        col = m;
    else
        col++;

    for (int i = row + 1; i < n and ok; i++)
    {
        for (int j = 0; j < col and ok; j++)
        {
            if (mat[i][j] != 0)
                ok = false;
        }
    }

    return ok;
}

int main()
{
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);
    
    int col;
    bool ok = true;
    for (int i = 0; i < n and ok; i++)
    {
        col = -1;
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] != 0 and col == -1)
                col = j;
        }
        ok = scanCol(i, col);
    }

    if (ok)
        printf("S\n");
    else
        printf("N\n");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
