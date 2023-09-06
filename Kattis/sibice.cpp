#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, w, h;
    scanf("%d %d %d", &n, &w, &h);

    int len = (int) sqrt(w*w + h*h);

    for (int i = 0, x; i < n; i++)
    {
        scanf("%d", &x);

        if (x <= len)
            puts("DA");
        else
            puts("NE");
    }
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
