#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    double ans = 1.0;
    scanf("%d", &n);

    while(n--)
    {
        int t;
        char op;

        scanf("%d %c", &t, &op);
        
        if (op == '*')
            ans *= t;
        else
            ans /= t;
    }

    printf("%.0lf\n", ans);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
