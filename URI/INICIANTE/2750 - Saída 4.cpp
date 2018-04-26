#include <bits/stdc++.h>

using namespace std;

void spaces(int from, int to)
{
    for (int i = from; i <= to; i++)
        printf(" ");
}

void proc1()
{
    for (int i = 1; i <= 39; i++)
        printf("-");
    printf("\n");
}

void proc2()
{
    printf("|");
    spaces(2, 3);
    printf("decimal");
    spaces(11, 12);
    printf("|");
    spaces(14, 15);
    printf("octal");
    spaces(21, 22);
    printf("|");
    spaces(24, 25);
    printf("Hexadecimal");
    spaces(37, 38);
    printf("|\n");
}

void proc3(int x)
{
    int lendec = (x >= 10) ? 2 : 1;
    int lenoc = (x >= 8) ? 2 : 1;
    int lenhex = 1;

    printf("|");
    spaces(2, 8-lendec);
    printf("%d", x);
    spaces(8 - lendec + 1 + lendec, 12);
    printf("|");
    spaces(14, 18-lenoc);
    printf("%o", x);
    spaces(18 - lenoc + 1 + lenoc, 22);
    printf("|");
    spaces(24, 30);
    printf("%X", x);
    spaces(32, 38);
    printf("|\n");
}

int main()
{
    proc1();
    proc2();
    proc1();
    for (int i = 0; i < 16; i++)
        proc3(i);
    proc1();

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
