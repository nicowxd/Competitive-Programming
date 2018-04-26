#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);

    while(n--)
    {
        int mat[3][3];

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                scanf("%d", &mat[i][j]);

        int cnt[210] = {0}, mx = 0, idx;
        vector<int> v;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (j == 0)
                {
                    int diff = abs(mat[i][j] - mat[i][j + 1]);
                    cnt[diff]++;
                    if (cnt[diff] > mx)
                    {
                        mx = cnt[diff];
                        idx = diff;
                    }
                }
                else
                {
                    int diff = abs(mat[i][j] - mat[i][j - 1]);
                    cnt[diff]++;
                    if (cnt[diff] > mx)
                    {
                        mx = cnt[diff];
                        idx = diff;
                    }
                }
            }
        }
              
        printf("Possiveis maletas:");
        
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int diff1, diff2;
                if (j == 0)
                    diff1 = abs(mat[i][j] - mat[i][j + 1]), diff2 = abs(mat[i][j] - mat[i][j + 2]);
                else if (j == 1)
                    diff1 = abs(mat[i][j] - mat[i][j + 1]), diff2 = abs(mat[i][j] - mat[i][j - 1]);
                else
                    diff1 = abs(mat[i][j] - mat[i][j - 1]), diff2 = abs(mat[i][j] - mat[i][j - 2]);
                if (!(diff1 == idx or diff2 == idx))
                    v.push_back(mat[i][j]);
            }
        }
            
        for (int i = 0; i < (int) v.size(); i++)
            printf(" %d%c", v[i], (i == (int) v.size() - 1) ? ';' : ',');
        printf("\n");
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
