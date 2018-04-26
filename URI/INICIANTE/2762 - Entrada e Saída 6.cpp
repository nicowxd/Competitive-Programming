#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    char s[100];

    scanf("%s", s);

    int X = 0, Y = 0, i;
    for (i = 0; s[i] != '.'; i++)
        X = X * 10 + s[i] - '0';
    i++;

    for (; s[i]; i++)
        Y = Y * 10 + s[i] - '0';

    printf("%d.%d\n", Y, X);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
