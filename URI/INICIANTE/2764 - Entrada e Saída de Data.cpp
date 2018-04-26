#include <bits/stdc++.h>

using namespace std;

int main()
{

    char d1, d2, m1, m2, a1, a2;
    scanf("%c%c/%c%c/%c%c", &d1, &d2, &m1, &m2, &a1, &a2);
    printf("%c%c/%c%c/%c%c\n", m1, m2, d1, d2, a1, a2);
    printf("%c%c/%c%c/%c%c\n", a1, a2, m1, m2, d1, d2);
    printf("%c%c-%c%c-%c%c\n", d1, d2, m1, m2, a1, a2);

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
