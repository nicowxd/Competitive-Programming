#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 0, a, b; i < 2; i++)
    {
        scanf("%d %d", &a, &b);
        x ^= a;
        y ^= b;
    }

    printf("%d %d\n", x, y);
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}

