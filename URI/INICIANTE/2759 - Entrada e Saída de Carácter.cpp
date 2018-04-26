#include <bits/stdc++.h>

using namespace std;

int main()
{

    char a, b, c;
    scanf("%c", &a);
    scanf(" %c", &b);
    scanf(" %c", &c);

    printf("A = %c, B = %c, C = %c\n", a, b, c);
    printf("A = %c, B = %c, C = %c\n", b, c, a);
    printf("A = %c, B = %c, C = %c\n", c, a, b);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
