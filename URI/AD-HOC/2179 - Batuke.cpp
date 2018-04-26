#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, f, c, mat[100][100] = {0};
    scanf("%d %d %d", &n, &f, &c);

    int cnt = 1, maxVal = n * n;

    for (int i = 50; i < 50 + n; i++)
        for (int j = 50; j < 50 + n; j++)
            mat[i][j] = cnt++;
    
    vector<int> v;

    int ans = 1, curx = 50 + f, cury = 50 + c, dir = 1, esq = 2, baixo = 1, cima = 2;
    bool ok = false;
    v.push_back(mat[curx][cury]);

    while(1)
    {
        for (int i = 0; i < dir and !ok; i++)
        {
            cury++;
            if (mat[curx][cury] != 0)
                v.push_back(mat[curx][cury]);
            ans++;
            if ((int) v.size() == maxVal)
                ok = true;
        }
        
        if (ok)
            break;
        dir += 2;

        for (int i = 0; i < baixo and !ok; i++)
        {
            curx++;
            if (mat[curx][cury] != 0)
                v.push_back(mat[curx][cury]);
            ans++;
            if ((int) v.size() == maxVal)
                ok = true;
        }
        
        if (ok)
            break;
        baixo += 2;

        for (int i = 0; i < esq and !ok; i++)
        {
            cury--;
            if (mat[curx][cury] != 0)
                v.push_back(mat[curx][cury]);
            ans++;
            if ((int) v.size() == maxVal)
                ok = true;
        }

        if (ok)
            break;
        esq += 2;
        
        for (int i = 0; i < cima and !ok; i++)
        {
            curx--;
            if (mat[curx][cury] != 0)
                v.push_back(mat[curx][cury]);
            ans++;
            if ((int) v.size() == maxVal)
                ok = true;
        }
        
        if (ok)
            break;
        cima += 2;
    }

    for (int i = 0; i < (int) v.size(); i++)
        printf("%d%c", v[i], (i == (int) v.size() - 1 ? '\n' : ' '));
    printf("%d\n", ans);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
