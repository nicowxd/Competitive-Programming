#include <bits/stdc++.h>

using namespace std;

const int MAXN = (int) 1e3 + 10;

int n, mat[MAXN][MAXN];

bool scanRow(long long x)
{
    long long sum;
    bool ok = true;

    for (int i = 0; i < n and ok; i++)
    {
        sum = 0;
        for (int j = 0; j < n and ok; j++)
            sum += mat[i][j];
        if (sum != x)
            ok = false;
    }

    return ok;
}

bool scanCol(long long x)
{
    long long sum;
    bool ok = true;

    for (int i = 0; i < n and ok; i++)
    {
        sum = 0;
        for (int j = 0; j < n and ok; j++)
            sum += mat[j][i];
        if (sum != x)
            ok = false;
    }

    return ok;
}

bool scanDiag(long long x)
{
    long long sum = 0;
    bool ok = true;

    for (int i = 0; i < n; i++)
        sum += mat[i][i];
    
    if (sum != x)
        ok = false;
    sum = 0;  
    for (int i = n-1; i >= 0 and ok; i--)
        sum += mat[i][i];

    if (sum != x)
        ok = false;
    
    return ok;
}

int main()
{

    long long sum = 0;
    bool diff = true;
    unordered_set<int> st;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            if (st.find(mat[i][j]) != st.end())
                diff = false;
            else
                st.insert(mat[i][j]);
            if (i == 0)
                sum += mat[i][j];
        }
    }

    if (diff and scanRow(sum) and scanCol(sum) and scanDiag(sum))
        printf("%lld\n", sum);
    else
        printf("0\n");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
