#include <bits/stdc++.h>

using namespace std;

void proc1()
{
    for (int i = 1; i <= 39; i++)
        printf("-");
    printf("\n");
}

void proc2(int n)
{
    printf("|");
    for (int i = 2; i < n; i++)
        printf(" ");
    printf("x = 35");
    for (int i = n + 6; i <= 38; i++)
        printf(" ");
    printf("|\n");
}

void proc3()
{
    printf("|");
    for (int i = 2; i <= 38; i++)
        printf(" ");
    printf("|\n");
}

int main()
{
    proc1();
    proc2(2);
    proc3();
    proc2(17);
    proc3();
    proc2(33);
    proc1();

    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}
