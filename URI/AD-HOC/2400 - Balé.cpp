#include <cstdio>

using namespace std;

#define INF 0x3f3f3f

int v[100010], ans;

void fastscan(int &number)
{
    bool negative = false;
    register int c;
 
    number = 0;
 
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    if (negative)
        number *= -1;
}

inline void merge(int l, int m, int r)
{
    int p = m - l + 1;
    int q = r - m;

    int L[p + 1], R[q + 1];
    
    for (int i = 0; i < p; i++)
        L[i] = v[i + l];
    for (int i = 0; i < q; i++)
        R[i] = v[i + m + 1];
    
    L[p] = INF;
    R[q] = INF;

    int i = 0, j = 0;

    for (int k = l; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            v[k] = L[i];
            i++;
        }
        else
        {
            ans += (p - i);
            v[k] = R[j];
            j++;
        }
    }
}

inline void mergeSort(int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(l, m);
        mergeSort(m + 1, r);
        merge(l, m, r);
    }
}

int main()
{
    int n, x;
    fastscan(n);

    for (int i = 0; i < n; i++)
    {
    	fastscan(x);
    	v[i] = x;
    }
    
    mergeSort(0, n - 1);

    printf("%d\n", ans);

    return 0;
}
