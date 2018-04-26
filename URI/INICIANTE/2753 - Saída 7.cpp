#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x = 97;

    for (int i = 0; i < 26; i++)
        printf("%d e %c\n", x + i, x + i);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
