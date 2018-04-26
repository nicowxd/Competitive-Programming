#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x, y, c1, c2, l1, l2;
    scanf("%d %d", &x, &y);

    scanf("%d %d", &c1, &l1);
    scanf("%d %d", &c2, &l2);

    if (c1 + c2 <= x and max(l1, l2) <= y)
        printf("S\n");
    else if (max(c1, c2) <= x and l1 + l2 <= y)
        printf("S\n");
    else if (c1 + l2 <= x and max(l1, c2) <= y)
        printf("S\n");
    else if (max(c1, l2) <= x and l1 + c2 <= y)
        printf("S\n");
    else if (c2 + l1 <= x and max(c1, l2) <= y)
        printf("S\n");
    else if (max(l1, c2) <= x and l2 + c1 <= y)
        printf("S\n");
    else
        printf("N\n");

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
