#include <bits/stdc++.h>

using namespace std;

int main()
{

    set<int> n;

    for (int i = 0, x; i < 10; i++)
    {
        scanf("%d", &x);
        n.insert(x%42);
    }

    printf("%d\n", (int) n.size());
    return 0;
}

