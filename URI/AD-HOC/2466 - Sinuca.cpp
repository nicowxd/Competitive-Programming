#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, mat[65][65];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &mat[n][i]);

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j < i + 1; j++)
        {
            if (mat[i + 1][j] == mat[i + 1][j - 1])
                mat[i][j - 1] = 1;
            else
                mat[i][j - 1] = -1;
        }
    }
    
    if (mat[1][0] == 1)
        puts("preta");
    else
        puts("branca");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
