#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

const int MAXN = 1e5 + 10;

int A[MAXN], inv;

inline void merge(int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; i++)
        L[i] = A[p + i];
    for (int i = 0; i < n2; i++)
        R[i] = A[i + q + 1];

    L[n1] = INF;
    R[n2] = INF;
    
    int i = 0, j = 0;
    for (int k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            inv += (n1 - i);
            A[k] = R[j];
            j++;
        }
    }
}


inline void mergeSort(int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        mergeSort(p, q);
        mergeSort(q+1, r);
        merge(p, q, r);
    }
}

int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        for (int i = 0; i < n; i++)
            scanf("%d", A + i);
        
        inv = 0;
        mergeSort(0, n - 1);
        printf("inv = %d\n", inv);
        if (inv&1)
            puts("Marcelo");
        else
            puts("Carlos");
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
