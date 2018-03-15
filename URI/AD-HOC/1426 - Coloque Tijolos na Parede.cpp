#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    while(n--)
    {
        int v[10][9] = {0};

        for (int i = 1, j = 1; i <= 9; i += 2, j += 2)
        {
            for (int k = 1; k <= j; k += 2)
                scanf("%d", &v[i][k]);
        }

        // Solve last row
        for (int i = 1; i <= 7; i += 2)
        {
            int x = (v[7][i] - (v[9][i] + v[9][i+2]))/2;
            v[9][i+1] = x;
            v[8][i] = (x + v[9][i]);
            v[8][i+1] = x + v[9][i+2];
        }
        
        for (int i = 8; i >= 3; i--)
        {
            for (int j = 1; j <= i-1; j++)
            {
                int x = v[i][j] + v[i][j+1];
                v[i-1][j] = x;
            }
        }

        for (int i = 1, j = 1; i <= 9; i++, j++)
        {
            for (int k = 1; k <= j; k++)
                printf("%d%c", v[i][k], (k == j) ? '\n' : ' ');
        }
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
