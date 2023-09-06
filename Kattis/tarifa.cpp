#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    
    int ans = 0;
    for (int i = 0, qty; i < n; i++)
    {
        scanf("%d", &qty);
        ans += (x - qty);
    }

    printf("%d\n", x + ans);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
