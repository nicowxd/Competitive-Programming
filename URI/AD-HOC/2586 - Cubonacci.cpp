#include <bits/stdc++.h>

using namespace std;

const int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1}; 

int main()
{

    int c;
    long long mat[2][3][3][3];
    scanf("%d", &c);

    while(c--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    scanf("%lld", &mat[0][i][j][k]);

        for (int q = 1; q <= n; q++)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    for (int k = 0; k < 3; k++)
                    {
                        mat[q&1][i][j][k] = mat[~q&1][i][j][k];
                        
                        if (i == 0)
                            mat[q&1][i][j][k] += mat[~q&1][i + 1][j][k];
                        else if (i == 1)
                        {
                            mat[q&1][i][j][k] += mat[~q&1][i + 1][j][k];
                            mat[q&1][i][j][k] += mat[~q&1][i - 1][j][k];
                        }
                        else
                            mat[q&1][i][j][k] += mat[~q&1][i - 1][j][k];
                            
                        for (int l = 0; l < 8; l++)
                        {
                            int newRow = j + dx[l], newCol = k + dy[l];
                            if (newRow < 0 or newCol < 0 or newRow > 2 or newCol > 2)
                                continue;
                            
                            mat[q&1][i][j][k] += mat[~q&1][i][newRow][newCol];
                            if (i == 0)
                                mat[q&1][i][j][k] += mat[~q&1][i + 1][newRow][newCol];
                            else if (i == 1)
                            {
                                mat[q&1][i][j][k] += mat[~q&1][i + 1][newRow][newCol];
                                mat[q&1][i][j][k] += mat[~q&1][i - 1][newRow][newCol];
                            }
                            else if (i == 2)
                                mat[q&1][i][j][k] += mat[~q&1][i - 1][newRow][newCol];
                        }
                    }
                }
            }
        }

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    printf("%lld%c", mat[n&1][i][j][k], (k == 2) ? '\n' : ' ');
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
