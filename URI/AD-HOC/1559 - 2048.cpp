#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        bool end = 0;
        int m[4][4];

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                scanf("%d", &m[i][j]);
                if (m[i][j] == 2048)
                    end = 1;
            }
        }

        if (end)
        {
            printf("NONE\n");
            continue;
        }
        bool up = 0, down = 0, left = 0, right = 0, first = 0;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i != 3 and ((m[i][j] != 0 and m[i+1][j] == 0) or (m[i][j] != 0 and m[i][j] == m[i+1][j])))
                    down = 1;
                if (i != 0 and ((m[i][j] != 0 and m[i-1][j] == 0) or (m[i][j] != 0 and m[i][j] == m[i-1][j])))
                    up = 1;
                if (j != 3 and ((m[i][j] != 0 and m[i][j+1] == 0) or (m[i][j] != 0 and m[i][j] == m[i][j+1])))
                    right = 1;
                if (j != 0 and ((m[i][j] != 0 and m[i][j-1] == 0) or (m[i][j] != 0 and m[i][j] == m[i][j-1])))
                    left = 1;
            }
        }

        if (!up and !down and !left and !right)
            printf("NONE");
        else
        {
            if (down)
            {
                printf("DOWN");
                first = 1;
            }
            if (left and first)
                printf(" LEFT");
            if (left and !first)
            {
                printf("LEFT");
                first = 1;
            }
            if (right and first)
                printf(" RIGHT");
            if (right and !first)
            {
                printf("RIGHT");
                first = 1;
            }
            if (up and first)
                printf(" UP");
            if (up and !first)
                printf("UP");
        }
        printf("\n");
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
