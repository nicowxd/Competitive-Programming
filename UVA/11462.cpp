#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2000010;

int A[MAXN], B[MAXN];

int main()
{

    int n;
    while(scanf("%d", &n) && n)
    {
        int C[100] = {0};       
        
        for (int i = 0; i < n; i++)
        {
            scanf("%d", A + i);
            C[A[i]]++;
            B[i] = 0;
        }
        
        for (int i = 1; i < 100; i++)
            C[i] = C[i-1] + C[i];
        
        for (int i = n - 1; i >= 0; i--)
        {
            B[C[A[i]]] = A[i];
            C[A[i]]--;
        }
        
        for (int i = 1; i <= n; i++)
            printf("%d%c", B[i], i == n ? '\n' : ' ');
    }

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
