#include <bits/stdc++.h>

using namespace std;

int main()
{


    int t, r, c;
    char mat[25][25], aux[25][25];
    scanf("%d", &t);

    for (int k = 1; k <= t; k++)
    {
        scanf("%d %d%*c", &r, &c);
        
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                scanf("%c", &mat[i][j]);
            getchar();
        }

        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                aux[r-i-1][c-j-1] = mat[i][j];
        
        printf("Test %d\n", k);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                printf("%c", aux[i][j]);
            printf("\n");
        }
    }

    return 0;
}
