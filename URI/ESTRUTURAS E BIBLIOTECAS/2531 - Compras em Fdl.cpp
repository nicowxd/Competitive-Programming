#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int st1[4 * MAXN], st2[4 * MAXN], A[MAXN];

int left(int p)
{
    return (p << 1);
}

int right(int p)
{
    return (p << 1) + 1;
}

void buildMin(int p, int L, int R)
{
    if (L == R)
        st1[p] = A[L];
    else
    {
        buildMin(left(p), L, (L + R) / 2);
        buildMin(right(p), (L + R) / 2 + 1, R);

        int p1 = st1[left(p)], p2 = st1[right(p)];
        st1[p] = (p1 <= p2) ? p1 : p2;
    }
}

void buildMax(int p, int L, int R)
{
    if (L == R)
        st2[p] = A[L];
    else
    {
        buildMax(left(p), L, (L + R) / 2);
        buildMax(right(p), (L + R) / 2 + 1, R);

        int p1 = st2[left(p)], p2 = st2[right(p)];
        st2[p] = (p1 >= p2) ? p1 : p2;
    }
}

int RMinQ(int p, int L, int R, int i, int j)
{
    if (L > j or R < i)
        return -1;
    if (L >= i && R <= j)
        return st1[p];

    int p1 = RMinQ(left(p), L, (L + R) / 2, i, j);
    int p2 = RMinQ(right(p), (L + R) / 2 + 1, R, i, j);
    
    if (p1 == -1)
        return p2;
    if (p2 == -1)
        return p1;

    return (p1 <= p2) ? p1 : p2;
}

int RMaxQ(int p, int L, int R, int i, int j)
{
    if (L > j or R < i)
        return -1;
    if (L >= i && R <= j)
        return st2[p];

    int p1 = RMaxQ(left(p), L, (L + R) / 2, i, j);
    int p2 = RMaxQ(right(p), (L + R) / 2 + 1, R, i, j);
    
    if (p1 == -1)
        return p2;
    if (p2 == -1)
        return p1;

    return (p1 >= p2) ? p1 : p2;
}

int updateMin(int p, int L, int R, int idx, int k)
{
    int i = idx, j = idx;
    
    if (L > j or R < i)
        return st1[p];
    if (L == i && R == j)
        return st1[p] = k;

    int p1 = updateMin(left(p), L, (L + R) / 2, idx, k);
    int p2 = updateMin(right(p), (L + R) / 2 + 1, R, idx, k);
    return st1[p] = (p1 <= p2) ? p1 : p2;
}

int updateMax(int p, int L, int R, int idx, int k)
{
    int i = idx, j = idx;

    if (L > j or R < i)
        return st2[p];
    if (L == i && R == j)
        return st2[p] = k;

    int p1 = updateMax(left(p), L, (L + R) / 2, idx, k);
    int p2 = updateMax(right(p), (L + R) / 2 + 1, R, idx, k);
    return st2[p] = (p1 >= p2) ? p1 : p2;
}

int main()
{

    int n, q;
    while(scanf("%d", &n) != EOF)
    {
        for (int i = 0, x; i < n; i++)
            scanf("%d", &A[i]);

        memset(st1, 0, sizeof st1);
        memset(st2, 0, sizeof st2);

        buildMin(1, 0, n - 1);
        buildMax(1, 0, n - 1);
        
        scanf("%d", &q);

        for (int i = 0, op, a, b; i < q; i++)
        {
            scanf("%d %d %d", &op, &a, &b);

            if (op == 1)
            {
                updateMin(1, 0, n - 1, a-1, b);
                updateMax(1, 0, n - 1, a-1, b);
            }
            else
                printf("%d\n", abs(RMaxQ(1, 0, n - 1, a-1, b-1) - RMinQ(1, 0, n - 1, a-1, b-1)));
        }
    }   

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
