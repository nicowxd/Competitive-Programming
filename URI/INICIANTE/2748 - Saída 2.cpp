#include <bits/stdc++.h>

using namespace std;

void proc1()
{
    for (int i = 1; i <= 39; i++)
        printf("-");
    printf("\n");
}

void proc2()
{
    printf("|");
    for (int i = 2; i <= 38; i++)
        printf(" ");
    printf("|\n");
}

void proc3(const char *str)
{
    int sz = strlen(str);

    printf("|");
    for (int i = 2; i <= 9; i++)
        printf(" ");
    printf("%s", str);

    for (int i = 10 + sz; i <= 38; i++)
        printf(" ");
    printf("|\n");
}

int main()
{
    proc1();
    proc3("Roberto");
    proc2();
    proc3("5786");
    proc2();
    proc3("UNIFEI");
    proc1();

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
