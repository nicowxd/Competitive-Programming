#include <bits/stdc++.h>

using namespace std;

int main()
{


    int n;
    scanf("%d", &n);

    while(n--)
    {
        int r, e, c;

        scanf("%d %d %d", &r, &e, &c);

        if (e - c > r)
            puts("advertise");
        else if (e - c == r)
            puts("does not matter");
        else
            puts("do not advertise");
    }


    return 0;
}
