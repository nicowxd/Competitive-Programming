#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3000010;

int A[MAXN], B[MAXN];

int main()
{

    int nc;
    scanf("%d", &nc);

    while(nc--)
    {
        int n;
        scanf("%d", &n);
        
        memset(A, 0, sizeof A);
        for (int i = 0; i < n; i++)
            scanf("%d", A + i);
        
        int C[240];
        
        memset(B, 0, sizeof B);
        for (int i = 0; i <= 230; i++)
            C[i] = 0;
        for (int i = 0; i < n; i++)
            C[A[i]]++;
        for (int i = 1; i <= 230; i++)
            C[i] = (C[i] + C[i-1]);
        for (int i = n-1; i >= 0; i--)
        {   
            B[C[A[i]]] = A[i];
            C[A[i]]--;
        }
        
        for (int i = 1; i <= n; i++)
            printf("%d%c", B[i], (i == n) ? '\n' : ' ');
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
